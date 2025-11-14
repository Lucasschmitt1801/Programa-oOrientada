#pragma once
#include "FormaGeometrica.h"

[cite_start]// Classe derivada Triângulo [cite: 54]
class Triangulo : public FormaGeometrica {
private:
    [cite_start]float Base; [cite: 55]
    [cite_start]float Altura; [cite: 56]
    [cite_start]// Atributos adicionais para perímetro [cite: 67]
    float Lado1, Lado2, Lado3;

public:
    [cite_start]// Construtor personalizado [cite: 65]
    Triangulo(float base, float altura, float l1, float l2, float l3);
    
    [cite_start]// Implementações [cite: 60, 61]
    double calcularArea() override;
    double calcularPerimetro() override;
};