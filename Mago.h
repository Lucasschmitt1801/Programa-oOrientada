#ifndef MAGO_H
#define MAGO_H

#include <string>

class Mago {
private:
    std::string nome;
    int nivel;
    // Atributos adicionais [cite: 76]
    int pontosDeMana;
    std::string escolaDeMagia;

public:
    Mago(const std::string& nome, int nivel, int mana, const std::string& escola);

    void lancarFeitico(const std::string& feitico);
    void aprenderMagia(const std::string& magia);

    // Métodos adicionais [cite: 76]
    void meditar();
    void status() const;
};

#endif // MAGO_H