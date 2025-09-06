#include "Data.h"

int main() {
    Data hoje(5, 9, 2025);

    hoje.imprimirData(); // Chama o primeiro método
    hoje.imprimirDataPorExtenso("São Leopoldo"); // Chama o segundo método

    return 0;
}