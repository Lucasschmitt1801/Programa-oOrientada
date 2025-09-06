#include <iostream>
#include "Album.h"
#include "Figurinha.h"

int main() {
    // Criar algumas figurinhas [cite: 70]
    Figurinha f1(10, "Zico", "Flamengo");
    Figurinha f2(9, "Ronaldo", "Corinthians");
    Figurinha f3(7, "Renato Portaluppi", "Grêmio");

    // Criar álbum e inserir [cite: 70]
    Album meuAlbum;
    meuAlbum.adicionar(f1);
    meuAlbum.adicionar(f2);
    meuAlbum.adicionar(f3);

    // Listar conteúdo [cite: 70]
    meuAlbum.listar();
    std::cout << "\n";

    // Checar se possui um número [cite: 70]
    int numCheck = 9;
    if (meuAlbum.possui(numCheck)) {
        std::cout << "O álbum POSSUI a figurinha de número " << numCheck << "." << std::endl;
    } else {
        std::cout << "O álbum NÃO POSSUI a figurinha de número " << numCheck << "." << std::endl;
    }
    
    numCheck = 11;
    if (meuAlbum.possui(numCheck)) {
        std::cout << "O álbum POSSUI a figurinha de número " << numCheck << "." << std::endl;
    } else {
        std::cout << "O álbum NÃO POSSUI a figurinha de número " << numCheck << "." << std::endl;
    }

    return 0;
}