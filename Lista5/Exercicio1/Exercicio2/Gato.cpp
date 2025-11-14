#include "Gato.h"

// Construtor inicializa a base com o nome e o som específico
Gato::Gato(std::string nome)
    : Animal(nome, "Miau") {}

[cite_start]// Implementação de fazerSom [cite: 40]
void Gato::fazerSom() {
    std::cout << this->Nome << " faz: " << this->Som_bicho << "!\n";
}