#pragma once
#include "Mago.h"

[cite_start]// Classe derivada MagoCinza [cite: 22]
class MagoCinza : public Mago {
public:
    MagoCinza(std::string nome, int poder, int idade);
    
    [cite_start]// Método especializado [cite: 23]
    void PrepararPocao();
};