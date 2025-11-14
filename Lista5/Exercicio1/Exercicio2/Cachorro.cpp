#include "Cachorro.h"

Cachorro::Cachorro(std::string nome)
    : Animal(nome, "Au au") {}

[cite_start]// Implementação de fazerSom [cite: 40]
void Cachorro::fazerSom() {
    std::cout << this->Nome << " faz: " << this->Som_bicho << "!\n";
}