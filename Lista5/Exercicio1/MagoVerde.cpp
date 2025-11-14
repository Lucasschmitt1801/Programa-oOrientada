#include "MagoVerde.h"

// Construtor (EscolaMagia = 2)
MagoVerde::MagoVerde(std::string nome, int poder, int idade)
    : Mago(nome, poder, idade, 2) {}

[cite_start]// Implementação [cite: 25]
void MagoVerde::FalarComAnimais() {
    std::cout << Nome << " esta falando com os passaros.\n";
}