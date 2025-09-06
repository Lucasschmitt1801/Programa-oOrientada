#ifndef FREQUENCIACARDIACA_H
#define FREQUENCIACARDIACA_H

#include <string>

class FrequenciaCardiaca {
private:
    std::string primeiroNome;
    std::string sobrenome;
    int diaNasc;
    int mesNasc;
    int anoNasc;

public:
    // Construtores [cite: 46]
    FrequenciaCardiaca();
    FrequenciaCardiaca(const std::string& nome, const std::string& sobrenome, int dia, int mes, int ano);

    // Métodos Set e Get [cite: 47]
    void setPrimeiroNome(const std::string& nome);
    std::string getPrimeiroNome() const;

    void setSobrenome(const std::string& sobrenome);
    std::string getSobrenome() const;

    void setDataNascimento(int dia, int mes, int ano);
    int getDiaNasc() const;
    int getMesNasc() const;
    int getAnoNasc() const;

    // Métodos de cálculo [cite: 49, 50, 51]
    int obterIdade(int diaAtual, int mesAtual, int anoAtual);
    int obterFrequenciaMaxima(int idade);
    void obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo);
};

#endif // FREQUENCIACARDIACA_H