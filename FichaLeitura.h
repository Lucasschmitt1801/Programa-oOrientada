#ifndef FICHALEITURA_H
#define FICHALEITURA_H

#include <string>

class FichaLeitura {
private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;
    int numPaginas;
    int paginaAtual;
    bool lido;
    double nota0a5;

public:
    // Construtores e métodos [cite: 22]
    FichaLeitura();
    FichaLeitura(const std::string& titulo, const std::string& autor, int ano, int paginas);

    void iniciarLeitura();
    void marcarLido();
    void avancarPaginas(int paginas);
    void avaliar(double nota);

    // Getters e Setters [cite: 22]
    // ... (getters e setters para todos os atributos)

    // Protótipos de métodos adicionais [cite: 22]
    double exibirPercentualLido() const;
    std::string resumo() const;
};

#endif // FICHALEITURA_H