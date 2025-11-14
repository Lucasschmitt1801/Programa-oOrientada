#pragma once
#include "FormaGeometrica.h"

[cite_start]// Classe derivada Círculo [cite: 57]
class Circulo : public FormaGeometrica {
private:
    [cite_start]float Raio; [cite: 58]

public:
    [cite_start]// Construtor personalizado [cite: 65]
    Circulo(float raio);

    [cite_start]// Implementações [cite: 59]
    double calcularArea() override;
    double calcularPerimetro() override;
};