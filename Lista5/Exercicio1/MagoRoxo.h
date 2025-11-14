#pragma once
#include "Mago.h"

[cite_start]// Classe derivada MagoRoxo [cite: 20]
class MagoRoxo : public Mago {
public:
    MagoRoxo(std::string nome, int poder, int idade);
    
    [cite_start]// Método especializado [cite: 21] (corrigido de "Criarllusao")
    void CriarIlusao();
};