#pragma once
#include "Mago.h"

[cite_start]// Classe derivada MagoVerde [cite: 18]
class MagoVerde : public Mago {
public:
    MagoVerde(std::string nome, int poder, int idade);
    
    [cite_start]// Método especializado [cite: 19]
    void FalarComAnimais();
};