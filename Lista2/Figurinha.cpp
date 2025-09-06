#include "Figurinha.h"
#include <iostream>
#include <stdexcept>

Figurinha::Figurinha(int num, const std::string& jogador, const std::string& time) {
    setNumero(num);
    this->nomeJogador = jogador;
    this->time = time;
}

void Figurinha::setNumero(int num) {
    if (num <= 0) { // Validação: numero > 0 [cite: 58]
        throw std::invalid_argument("O número da figurinha deve ser positivo.");
    }
    numero = num;
}

int Figurinha::getNumero() const {
    return numero;
}

void Figurinha::resumo() const {
    std::cout << "  Nº " << numero << ": " << nomeJogador << " (" << time << ")" << std::endl;
}