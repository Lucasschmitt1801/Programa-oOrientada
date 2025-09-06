#include "Album.h"
#include <iostream>

void Album::adicionar(const Figurinha& f) {
    // Para simplificar, não estamos checando por duplicatas
    figurinhas.push_back(f);
}

bool Album::possui(int numero) {
    for (const auto& fig : figurinhas) {
        if (fig.getNumero() == numero) {
            return true;
        }
    }
    return false;
}

int Album::quantidade() {
    return figurinhas.size();
}

void Album::listar() {
    std::cout << "Figurinhas no Album (" << quantidade() << " total):" << std::endl;
    for (const auto& fig : figurinhas) {
        fig.resumo();
    }
}