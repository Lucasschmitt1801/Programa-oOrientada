#include "Data.h"
#include <iostream>
#include <string>

Data::Data(int d, int m, int a) : dia(d), mes(m), ano(a) {}

void Data::imprimirData() const {
    // Formato DD/MM/AAAA
    std::cout << (dia < 10 ? "0" : "") << dia << "/"
              << (mes < 10 ? "0" : "") << mes << "/"
              << ano << std::endl;
}

void Data::imprimirDataPorExtenso(const std::string& cidade) const {
    std::string nomeMes;
    switch (mes) {
        case 1: nomeMes = "Janeiro"; break;
        case 2: nomeMes = "Fevereiro"; break;
        case 3: nomeMes = "Marco"; break;
        case 4: nomeMes = "Abril"; break;
        case 5: nomeMes = "Maio"; break;
        case 6: nomeMes = "Junho"; break;
        case 7: nomeMes = "Julho"; break;
        case 8: nomeMes = "Agosto"; break;
        case 9: nomeMes = "Setembro"; break;
        case 10: nomeMes = "Outubro"; break;
        case 11: nomeMes = "Novembro"; break;
        case 12: nomeMes = "Dezembro"; break;
        default: nomeMes = "Mes Invalido"; break;
    }
    std::cout << cidade << ", " << dia << " de " << nomeMes << " de " << ano << "." << std::endl;
}