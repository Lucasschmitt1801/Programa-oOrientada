#include "MagoBranco.h"

[cite_start]// Construtor passa dados para a classe base Mago [cite: 26]
// Define EscolaMagia como 1 (ex: Magia Branca)
MagoBranco::MagoBranco(std::string nome, int poder, int idade)
    : Mago(nome, poder, idade, 1) {}

[cite_start]// Implementação do método especializado [cite: 25]
void MagoBranco::LancarCura() {
    std::cout << Nome << " lanca uma cura poderosa!\n";
}