#include "MagoRoxo.h"

// Construtor (EscolaMagia = 3)
MagoRoxo::MagoRoxo(std::string nome, int poder, int idade)
    : Mago(nome, poder, idade, 3) {}

[cite_start]// Implementação [cite: 25]
void MagoRoxo::CriarIlusao() {
    std::cout << Nome << " cria uma ilusao impressionante!\n";
}