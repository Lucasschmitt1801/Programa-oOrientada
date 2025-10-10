#ifndef MAGO_H
#define MAGO_H

#include <string>
#include <iostream>

class Mago {
private:
    std::string nome;
    int idade;
    std::string escola;

public:
    // Construtor padrão: exigido para alocação de arrays dinâmicos
    Mago(); 

    // Construtor parametrizado: exigido para criar objetos com os dados lidos do CSV
    Mago(std::string nome, int idade, std::string escola); 

    // Getters e Setters
    std::string getNome() const;
    int getIdade() const;
    std::string getEscola() const;
    void setNome(std::string nome);
    void setIdade(int idade);
    void setEscola(std::string escola);

    // Método para imprimir os dados, conforme exigido pelo main
    void exibir() const; 
};

#endif 