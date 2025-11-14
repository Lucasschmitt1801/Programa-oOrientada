#pragma once
#include <string>
#include <iostream>

[cite_start]// Classe base Abstrata FormaGeométrica [cite: 47, 50]
class FormaGeometrica {
protected:
    [cite_start]std::string Nome; [cite: 51]

public:
    FormaGeometrica(std::string nome) : Nome(nome) {}
    virtual ~FormaGeometrica() {}

    [cite_start]// Métodos virtuais puros [cite: 52, 53, 63]
    // (Retornam double para precisão)
    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;

    std::string getNome() { return Nome; }
};