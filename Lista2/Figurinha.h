#ifndef FIGURINHA_H
#define FIGURINHA_H

#include <string>

class Figurinha {
private:
    int numero;
    std::string nomeJogador;
    std::string time;

public:
    // Construtores, set/get e resumo [cite: 60]
    Figurinha(int num, const std::string& jogador, const std::string& time);
    
    void setNumero(int num);
    int getNumero() const;
    
    // ... outros getters e setters
    
    void resumo() const;
};

#endif // FIGURINHA_H