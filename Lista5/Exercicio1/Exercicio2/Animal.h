#pragma once
#include <string>
#include <iostream>

[cite_start]// Classe base Abstrata Animal [cite: 29, 30]
class Animal {
protected:
    [cite_start]std::string Nome; [cite: 31]
    [cite_start]std::string Som_bicho; [cite: 31]

public:
    Animal(std::string nome, std::string som) : Nome(nome), Som_bicho(som) {}
    virtual ~Animal() {}

    [cite_start]// Método virtual puro (abstrato) [cite: 32, 39]
    // Obriga as classes filhas a implementar este método
    virtual void fazerSom() = 0;
};