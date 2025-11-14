#include "MagoCinza.h"

// Construtor (EscolaMagia = 4)
MagoCinza::MagoCinza(std::string nome, int poder, int idade)
    : Mago(nome, poder, idade, 4) {}

[cite_start]// Implementação [cite: 25]
void MagoCinza::PrepararPocao() {
    std::cout << Nome << " esta preparando uma pocao borbulhante.\n";
}