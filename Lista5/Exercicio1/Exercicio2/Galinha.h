#pragma once
#include "Animal.h"

[cite_start]// Classe derivada Galinha [cite: 37]
class Galinha : public Animal {
public:
    Galinha(std::string nome);
    
    [cite_start]// Implementação obrigatória [cite: 38]
    void fazerSom() override;
};