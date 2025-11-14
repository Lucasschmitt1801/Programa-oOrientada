#include "Triangulo.h"

[cite_start]// Construtor inicializa atributos e o Nome da base [cite: 65]
Triangulo::Triangulo(float base, float altura, float l1, float l2, float l3)
    : FormaGeometrica("Triangulo"), Base(base), Altura(altura), Lado1(l1), Lado2(l2), Lado3(l3) {}

[cite_start]// Fórmula da Área [(Base * Altura) / 2] [cite: 67]
double Triangulo::calcularArea() {
    return (Base * Altura) / 2.0;
}

[cite_start]// Fórmula do Perímetro (Lado1 + Lado2 + Lado3) [cite: 67]
double Triangulo::calcularPerimetro() {
    return Lado1 + Lado2 + Lado3;
}