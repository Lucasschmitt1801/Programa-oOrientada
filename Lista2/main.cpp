#include <iostream>
#include "FrequenciaCardiaca.h"
#include <ctime>

int main() {
    std::string nome, sobrenome;
    int dia, mes, ano;

    std::cout << "Digite o primeiro nome: ";
    std::cin >> nome;
    std::cout << "Digite o sobrenome: ";
    std::cin >> sobrenome;
    std::cout << "Digite a data de nascimento (DD MM AAAA): ";
    std::cin >> dia >> mes >> ano;

    FrequenciaCardiaca pessoa(nome, sobrenome, dia, mes, ano);

    // Obter data atual
    time_t t = time(0);
    tm* now = localtime(&t);
    int anoAtual = now->tm_year + 1900;
    int mesAtual = now->tm_mon + 1;
    int diaAtual = now->tm_mday;

    int idade = pessoa.obterIdade(diaAtual, mesAtual, anoAtual);
    int freqMax = pessoa.obterFrequenciaMaxima(idade);
    int minIdeal, maxIdeal;
    pessoa.obterFrequenciaIdeal(idade, minIdeal, maxIdeal);

    std::cout << "\n--- Resultados ---" << std::endl;
    std::cout << "Nome completo: " << pessoa.getPrimeiroNome() << " " << pessoa.getSobrenome() << std::endl;
    std::cout << "Data de Nascimento: " << pessoa.getDiaNasc() << "/" << pessoa.getMesNasc() << "/" << pessoa.getAnoNasc() << std::endl;
    std::cout << "Idade: " << idade << " anos" << std::endl;
    std::cout << "Frequência cardíaca máxima: " << freqMax << " bpm" << std::endl;
    std::cout << "Faixa de frequência ideal: " << minIdeal << " - " << maxIdeal << " bpm" << std::endl;

    return 0;
}