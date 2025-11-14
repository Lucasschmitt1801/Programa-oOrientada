#include <iostream>
#include <vector>

// --- Includes Exercício 1 ---
#include "MagoBranco.h"
#include "MagoVerde.h"
#include "MagoRoxo.h"
#include "MagoCinza.h"

// --- Includes Exercício 2 ---
#include "Gato.h"
#include "Cachorro.h"
#include "Galinha.h"

// --- Includes Exercício 3 ---
#include "Retangulo.h"
#include "Circulo.h"
#include "Triangulo.h"

int main() {
    [cite_start]// --- Demonstração Exercício 1 --- [cite: 27]
    std::cout << "--- Exercicio 1: Magos ---\n";
    MagoBranco gandalf("Gandalf", 100, 2019);
    MagoVerde radagast("Radagast", 70, 1500);
    MagoRoxo saruman("Saruman", 90, 2000); // Exemplo, cor fictícia
    MagoCinza elminster("Elminster", 95, 1200);

    [cite_start]// Métodos herdados [cite: 27]
    gandalf.Falar();
    radagast.Andar();
    
    [cite_start]// Métodos especializados [cite: 27]
    gandalf.LancarCura();
    radagast.FalarComAnimais();
    saruman.CriarIlusao();
    elminster.PrepararPocao();
    
    std::cout << "\n-----------------------------\n\n";

    // --- Demonstração Exercício 2 ---
    std::cout << "--- Exercicio 2: Animais ---\n";
    
    [cite_start]// Demonstração de que Animal não pode ser instanciada: [cite: 41]
    // Animal animalTeste("Teste", "..."); // DESCOMENTE PARA VER O ERRO DE COMPILAÇÃO
    
    [cite_start]// Instanciando classes filhas [cite: 42]
    Gato felix("Felix");
    Cachorro rex("Rex");
    Galinha gertrudes("Gertrudes");

    [cite_start]// Chamando fazerSom() de cada um [cite: 42]
    felix.fazerSom();
    rex.fazerSom();
    gertrudes.fazerSom();
    
    // Demonstração extra (Polimorfismo)
    std::cout << "\nDemonstracao com Polimorfismo:\n";
    std::vector<Animal*> fazenda;
    fazenda.push_back(&felix);
    fazenda.push_back(&rex);
    fazenda.push_back(&gertrudes);

    for (Animal* animal : fazenda) {
        animal->fazerSom();
    }

    std::cout << "\n-----------------------------\n\n";

    [cite_start]// --- Demonstração Exercício 3 --- [cite: 66]
    std::cout << "--- Exercicio 3: Formas Geometricas ---\n";

    [cite_start]// Criando instâncias [cite: 66]
    Retangulo ret(10.0f, 5.0f);
    Circulo circ(7.0f);
    // Para o triângulo: Base=10, Altura=8, Lados=10, 9, 9
    Triangulo tri(10.0f, 8.0f, 10.0f, 9.0f, 9.0f);

    // Usando um vetor de ponteiros para demonstrar Polimorfismo
    std::vector<FormaGeometrica*> formas;
    formas.push_back(&ret);
    formas.push_back(&circ);
    formas.push_back(&tri);

    [cite_start]// Imprimindo resultados [cite: 66]
    for (FormaGeometrica* forma : formas) {
        std::cout << "Forma: " << forma->getNome() << "\n";
        std::cout << "  Area: " << forma->calcularArea() << "\n";
        std::cout << "  Perimetro: " << forma->calcularPerimetro() << "\n\n";
    }

    return 0;
}