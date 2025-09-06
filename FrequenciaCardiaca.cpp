#include "FrequenciaCardiaca.h"
#include <stdexcept>

FrequenciaCardiaca::FrequenciaCardiaca() : diaNasc(1), mesNasc(1), anoNasc(1901) {}

FrequenciaCardiaca::FrequenciaCardiaca(const std::string& nome, const std::string& sobrenome, int dia, int mes, int ano) {
    setPrimeiroNome(nome);
    setSobrenome(sobrenome);
    setDataNascimento(dia, mes, ano);
}

void FrequenciaCardiaca::setPrimeiroNome(const std::string& nome) {
    primeiroNome = nome;
}

std::string FrequenciaCardiaca::getPrimeiroNome() const {
    return primeiroNome;
}

void FrequenciaCardiaca::setSobrenome(const std::string& sobrenome) {
    this->sobrenome = sobrenome;
}

std::string FrequenciaCardiaca::getSobrenome() const {
    return sobrenome;
}

void FrequenciaCardiaca::setDataNascimento(int dia, int mes, int ano) {
    // Validação simples conforme especificado [cite: 47]
    if (dia < 1 || dia > 31) throw std::invalid_argument("Dia inválido.");
    if (mes < 1 || mes > 12) throw std::invalid_argument("Mês inválido.");
    if (ano <= 1900) throw std::invalid_argument("Ano deve ser maior que 1900.");
    diaNasc = dia;
    mesNasc = mes;
    anoNasc = ano;
}

int FrequenciaCardiaca::getDiaNasc() const { return diaNasc; }
int FrequenciaCardiaca::getMesNasc() const { return mesNasc; }
int FrequenciaCardiaca::getAnoNasc() const { return anoNasc; }

int FrequenciaCardiaca::obterIdade(int diaAtual, int mesAtual, int anoAtual) {
    int idade = anoAtual - anoNasc;
    if (mesAtual < mesNasc || (mesAtual == mesNasc && diaAtual < diaNasc)) {
        idade--;
    }
    return idade;
}

int FrequenciaCardiaca::obterFrequenciaMaxima(int idade) {
    return 220 - idade; // Fórmula de 220 - idade [cite: 50]
}

void FrequenciaCardiaca::obterFrequenciaIdeal(int idade, int& minAlvo, int& maxAlvo) {
    int maxFreq = obterFrequenciaMaxima(idade);
    minAlvo = maxFreq * 0.50; // 50% da máxima [cite: 51]
    maxAlvo = maxFreq * 0.85; // 85% da máxima [cite: 51, 52]
}