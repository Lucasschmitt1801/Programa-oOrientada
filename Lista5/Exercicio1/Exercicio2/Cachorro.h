#pragma once
#include "Animal.h"

[cite_start]// Classe derivada Cachorro [cite: 35]
class Cachorro : public Animal {
public:
    Cachorro(std::string nome);
    
    [cite_start]// Implementação obrigatória [cite: 36]
    void fazerSom() override;
};