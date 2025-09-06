#ifndef ALBUM_H
#define ALBUM_H

#include "Figurinha.h"
#include <vector>

class Album {
private:
    std::vector<Figurinha> figurinhas; // Vetor de figurinhas [cite: 63]

public:
    // Métodos para gerenciar o álbum [cite: 67, 68, 69]
    void adicionar(const Figurinha& f);
    bool possui(int numero);
    int quantidade();
    void listar();
};

#endif // ALBUM_H