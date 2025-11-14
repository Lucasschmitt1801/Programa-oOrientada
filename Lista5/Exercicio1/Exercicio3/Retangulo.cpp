#include "Retangulo.h"

[cite_start]// Construtor inicializa atributos e o Nome da base [cite: 65]
Retangulo::Retangulo(float base, float altura)
    : FormaGeometrica("Retangulo"), Base(base), Altura(altura) {}

[cite_start]// Fórmula da Área [cite: 67]
double Retangulo::calcularArea() {
    return Base * Altura;
}

[cite_start]// Fórmula do Perímetro [cite: 67]
double Retangulo::calcularPerimetro() {
    return 2 * (Base + Altura);
}