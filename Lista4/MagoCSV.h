#ifndef MAGOCSV_H
#define MAGOCSV_H

#include "Mago.h"
#include <string>

class MagoCSV {
public:
    void serialize(const Mago* magos, int nLinhas, const std::string& nomeArquivo) const;
    Mago* deserialize(const std::string& nomeArquivo, int& nLinhas, int nColunas) const;
};

#endif // MAGOCSV_H