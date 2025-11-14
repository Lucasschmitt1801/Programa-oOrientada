#pragma once
#include "FormaGeometrica.h"

[cite_start]// Classe derivada Retangulo [cite: 48]
class Retangulo : public FormaGeometrica {
private:
    [cite_start]float Base; [cite: 49]
    [cite_start]float Altura; [cite: 49]

public:
    [cite_start]// Construtor personalizado [cite: 65]
    Retangulo(float base, float altura);
    
    [cite_start]// Implementações [cite: 62]
    double calcularArea() override;
    double calcularPerimetro() override;
};