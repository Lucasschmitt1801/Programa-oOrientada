#include "Mago.h"
#include <iostream>

int main() {
    // Instanciando 3 objetos da classe Mago [cite: 77]
    Mago gandalf("Gandalf", 20, 150, "Istari");
    Mago merlin("Merlin", 18, 120, "Druidica");
    Mago rincewind("Rincewind", 5, 30, "Fuga");
    
    std::cout << "--- Batalha dos Magos ---\n" << std::endl;

    // Invocando seus métodos [cite: 77]
    gandalf.status();
    gandalf.lancarFeitico("Luz Divina");
    
    merlin.status();
    merlin.aprenderMagia("Transformacao");
    merlin.lancarFeitico("Metamorfose");

    rincewind.status();
    rincewind.lancarFeitico("Correr Muito");
    rincewind.meditar();

    return 0;
}