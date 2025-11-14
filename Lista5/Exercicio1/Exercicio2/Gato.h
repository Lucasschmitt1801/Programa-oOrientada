#pragma once
#include "Animal.h"

[cite_start]// Classe derivada Gato [cite: 33]
class Gato : public Animal {
public:
    Gato(std::string nome);
    
    [cite_start]// Implementação obrigatória do método abstrato [cite: 34]
    void fazerSom() override;
};