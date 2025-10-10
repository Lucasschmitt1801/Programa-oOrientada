#include "MagoCSV.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

void MagoCSV::serialize(const Mago* magos, int nLinhas, const std::string& nomeArquivo) const {
    std::ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para escrita: " << nomeArquivo << std::endl;
        return;
    }

    // Escreve o cabeçalho
    arquivo << "Nome,Idade,Escola\n";

    // Escreve os dados dos magos
    for (int i = 0; i < nLinhas; ++i) {
        arquivo << magos[i].getNome() << ","
                << magos[i].getIdade() << ","
                << magos[i].getEscola() << "\n";
    }
    arquivo.close();
    std::cout << "Dados serializados com sucesso em " << nomeArquivo << std::endl;
}

Mago* MagoCSV::deserialize(const std::string& nomeArquivo, int& nLinhas, int nColunas) const {
    std::ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo para leitura: " << nomeArquivo << std::endl;
        nLinhas = 0;
        return nullptr;
    }

    std::vector<Mago> magosTemp;
    std::string linha, palavra;

    // Pula o cabeçalho
    std::getline(arquivo, linha);

    // Lê o resto do arquivo linha por linha
    while (std::getline(arquivo, linha)) {
        std::stringstream ss(linha);
        std::string nome, escola;
        int idade;
        
        std::getline(ss, palavra, ',');
        nome = palavra;

        std::getline(ss, palavra, ',');
        try {
            idade = std::stoi(palavra);
        } catch (const std::invalid_argument& e) {
            idade = 0; // valor padrão em caso de erro
        }
        
        std::getline(ss, palavra, ',');
        escola = palavra;

        magosTemp.push_back(Mago(nome, idade, escola));
    }
    arquivo.close();

    nLinhas = magosTemp.size();
    if (nLinhas == 0) return nullptr;
    
    // Aloca dinamicamente o array de magos e copia os dados do vetor
    Mago* magosArray = new Mago[nLinhas];
    for (int i = 0; i < nLinhas; ++i) {
        magosArray[i] = magosTemp[i];
    }
    
    return magosArray;
}