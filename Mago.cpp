#include "Mago.h"
#include <iostream>

Mago::Mago(const std::string& nome, int nivel, int mana, const std::string& escola)
    : nome(nome), nivel(nivel), pontosDeMana(mana), escolaDeMagia(escola) {}

void Mago::lancarFeitico(const std::string& feitico) {
    if (pontosDeMana >= 10) {
        pontosDeMana -= 10;
        std::cout << nome << " lanca " << feitico << "! (Mana restante: " << pontosDeMana << ")" << std::endl;
    } else {
        std::cout << nome << " nao tem mana suficiente para lancar " << feitico << "." << std::endl;
    }
}

void Mago::aprenderMagia(const std::string& magia) {
    std::cout << nome << " aprendeu a magia: " << magia << "." << std::endl;
}

void Mago::meditar() {
    pontosDeMana += 20;
    std::cout << nome << " medita e recupera mana. (Mana atual: " << pontosDeMana << ")" << std::endl;
}

void Mago::status() const {
    std::cout << "--- Status do Mago ---" << std::endl;
    std::cout << "Nome: " << nome << " | Nivel: " << nivel << std::endl;
    std::cout << "Escola: " << escolaDeMagia << " | Mana: " << pontosDeMana << std::endl;
    std::cout << "----------------------" << std::endl;
}