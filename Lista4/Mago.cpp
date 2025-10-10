#include "Mago.h"

// Implementação do construtor padrão
Mago::Mago() : idade(0) {}

// Implementação do construtor parametrizado
Mago::Mago(std::string nome, int idade, std::string escola) {
    this->nome = nome;
    this->idade = idade;
    this->escola = escola;
}

// Implementações dos Getters e Setters
std::string Mago::getNome() const { return nome; }
int Mago::getIdade() const { return idade; }
std::string Mago::getEscola() const { return escola; }
void Mago::setNome(std::string nome) { this->nome = nome; }
void Mago::setIdade(int idade) { this->idade = idade; }
void Mago::setEscola(std::string escola) { this->escola = escola; }

// Implementação do método para exibir os dados do Mago
void Mago::exibir() const {
    std::cout << "Nome: " << nome << ", Idade: " << idade << ", Escola: " << escola << std::endl;
}