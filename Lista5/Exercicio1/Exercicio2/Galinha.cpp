#include "Galinha.h"

Galinha::Galinha(std::string nome)
    : Animal(nome, "Co co rico") {}

[cite_start]// Implementação de fazerSom [cite: 40]
void Galinha::fazerSom() {
    std::cout << this->Nome << " faz: " << this->Som_bicho << "!\n";
}