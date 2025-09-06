#ifndef DATA_H
#define DATA_H

#include <string>

class Data {
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes, int ano);

    // Métodos solicitados [cite: 79]
    void imprimirData() const;
    void imprimirDataPorExtenso(const std::string& cidade) const;
};

#endif // DATA_H