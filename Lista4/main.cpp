#include "Mago.h"
#include "MagoCSV.h"
#include <iostream>
#include <fstream> // Necessário para std::ofstream
#include <string>  // Necessário para std::string e std::getline

// Função auxiliar para criar um arquivo CSV de exemplo.
// Isso garante que o programa possa ser executado sem a necessidade de criar o arquivo manualmente.
void criarArquivoCSVInicial() {
    std::ofstream arquivo("magos.csv");
    if (arquivo.is_open()) {
        arquivo << "Nome,Idade,Escola\n";
        arquivo << "Harry Potter,17,Hogwarts\n";
        arquivo << "Hermione Granger,18,Hogwarts\n";
        arquivo << "Alvo Dumbledore,115,Hogwarts\n";
        arquivo.close();
    } else {
        std::cerr << "Nao foi possivel criar o arquivo magos.csv para o teste." << std::endl;
    }
}

int main() {
    // 1. Prepara o ambiente criando o arquivo CSV de entrada.
    criarArquivoCSVInicial();

    // 2. Cria um objeto da classe MagoCSV para manipular os arquivos.
    MagoCSV csvHandler;

    // 3. Chama o método deserialize para ler o arquivo e popular o array dinâmico.
    int numMagos = 0;
    // O ponteiro 'magos' irá apontar para o array de Magos alocado dinamicamente dentro de deserialize.
    Mago* magos = csvHandler.deserialize("magos.csv", numMagos, 3);

    // 4. Verifica se a leitura foi bem-sucedida antes de continuar.
    if (magos == nullptr) {
        std::cerr << "Falha ao ler o arquivo 'magos.csv'. O programa sera encerrado." << std::endl;
        return 1; // Encerra o programa com um código de erro.
    }

    // 5. Percorre o array e imprime as informações de todos os magos lidos.
    std::cout << "--- Magos lidos do arquivo magos.csv ---" << std::endl;
    for (int i = 0; i < numMagos; ++i) {
        magos[i].exibir();
    }

    // 6. Permite a criação de um novo Mago a ser adicionado ao array.
    std::cout << "\n--- Adicionando um novo Mago ---" << std::endl;
    std::string nome, escola;
    int idade;

    std::cout << "Digite o nome do novo mago: ";
    std::getline(std::cin, nome);

    std::cout << "Digite a idade: ";
    std::cin >> idade;

    // Limpa o buffer de entrada. Após ler um número com '>>', um caractere de nova linha ('\n')
    // permanece no buffer, o que faria com que o próximo 'getline' lesse uma string vazia.
    // std::cin.ignore() descarta esse caractere.
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Digite a escola de magia: ";
    std::getline(std::cin, escola);

    Mago novoMago(nome, idade, escola);

    // 7. Redimensiona o array dinâmico para adicionar o novo mago.
    int novoTamanho = numMagos + 1;
    Mago* magosAtualizados = new Mago[novoTamanho]; // Aloca um novo array, maior.

    // Copia os magos antigos para o novo array.
    for (int i = 0; i < numMagos; ++i) {
        magosAtualizados[i] = magos[i];
    }

    // Adiciona o novo mago na última posição.
    magosAtualizados[novoTamanho - 1] = novoMago;

    // Libera a memória do array antigo, pois seus dados já foram copiados.
    // Isso é crucial para evitar vazamento de memória (memory leak).
    delete[] magos;
    
    // O ponteiro 'magos' agora aponta para o novo array atualizado.
    magos = magosAtualizados;
    numMagos = novoTamanho; // Atualiza a contagem de magos.

    std::cout << "\n--- Lista de Magos Atualizada ---" << std::endl;
    for (int i = 0; i < numMagos; ++i) {
        magos[i].exibir();
    }

    // 8. Demonstra o método serialize gravando o array atualizado em um novo arquivo.
    std::cout << "\nGravando a lista atualizada em 'saida.csv'..." << std::endl;
    csvHandler.serialize(magos, numMagos, "saida.csv");

    // 9. Libera a memória do array final antes de encerrar o programa.
    delete[] magos;
    magos = nullptr; // Boa prática: anular o ponteiro após deletar para evitar uso acidental.

    return 0;
}