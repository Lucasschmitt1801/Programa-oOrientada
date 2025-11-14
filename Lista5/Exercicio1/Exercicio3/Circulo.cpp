#include "Circulo.h"
#include <cmath> // Necessário para M_PI

[cite_start]// Construtor inicializa atributos e o Nome da base [cite: 65]
Circulo::Circulo(float raio)
    : FormaGeometrica("Circulo"), Raio(raio) {}

[cite_start]// Fórmula da Área (π * Raio²) [cite: 67]
double Circulo::calcularArea() {
    return M_PI * Raio * Raio;
}

[cite_start]// Fórmula do Perímetro (2 * π * Raio) [cite: 67]
double Circulo::calcularPerimetro() {
    return 2 * M_PI * Raio;
}