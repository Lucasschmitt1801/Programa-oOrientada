#pragma once
#include "Mago.h"

[cite_start]// Classe derivada MagoBranco [cite: 16]
class MagoBranco : public Mago {
public:
    MagoBranco(std::string nome, int poder, int idade);
    
    [cite_start]// Método especializado [cite: 17]
    void LancarCura();
};