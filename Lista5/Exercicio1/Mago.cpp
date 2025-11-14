#include "Mago.h"

[cite_start]// Implementação do construtor [cite: 26]
Mago::Mago(std::string nome, int poder, int idade, int escola)
    : Nome(nome), Poder(poder), Idade(idade), EscolaMagia(escola) {
    std::cout << "Mago " << Nome << " (Poder: " << Poder << ") foi criado.\n";
}

[cite_start]// Implementação dos métodos gerais [cite: 24]
void Mago::Andar() {
    std::cout << Nome << " esta andando...\n";
}

void Mago::Falar() {
    std::cout << Nome << " diz: 'Ola!'\n";
}

void Mago::InvocarMagia() {
    std::cout << Nome << " invoca uma magia geral!\n";
}