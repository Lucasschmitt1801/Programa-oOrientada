#ifndef CORPOCELESTE_H
#define CORPOCELESTE_H

#include <string>

// Enumeração auxiliar [cite: 25]
enum class TipoCorpo { Estrela, Planeta, Lua, Asteroide, Cometa, Outro };

class CorpoCeleste {
private:
    std::string nome;
    TipoCorpo tipo;
    double massakg;
    double raiokm;

public:
    // Construtores, Getters e Setters [cite: 27]
    CorpoCeleste();
    CorpoCeleste(const std::string& nome, TipoCorpo tipo, double massakg, double raiokm);

    // ... (getters e setters para todos os atributos)

    // Protótipos de métodos adicionais [cite: 27]
    double calcularDensidade() const;
    double gravidadeSuperficial() const;
    std::string descricao() const;
};

#endif // CORPOCELESTE_H