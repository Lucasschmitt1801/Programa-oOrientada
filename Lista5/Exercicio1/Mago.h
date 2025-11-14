#pragma once
#include <string>
#include <iostream>

[cite_start]// Classe base Mago [cite: 8]
class Mago {
protected:
    [cite_start]std::string Nome; [cite: 9]
    [cite_start]int Poder; [cite: 10]
    [cite_start]int Idade; [cite: 11]
    [cite_start]int EscolaMagia; [cite: 12]

public:
    [cite_start]// Construtor [cite: 26]
    Mago(std::string nome, int poder, int idade, int escola);
    
    // Destrutor virtual (boa prática para classes base)
    virtual ~Mago() {}

    [cite_start]// Métodos gerais [cite: 13-15]
    void Andar();
    void Falar();
    void InvocarMagia();
};