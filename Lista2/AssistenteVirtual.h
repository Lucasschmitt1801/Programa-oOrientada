#ifndef ASSISTENTEVIRTUAL_H
#define ASSISTENTEVIRTUAL_H

#include <string>

class AssistenteVirtual {
private:
    std::string nome;
    std::string idioma;
    std::string versao;
    int volume;
    bool microfoneAtivo;

public:
    // Construtores e métodos principais [cite: 33]
    AssistenteVirtual(const std::string& nome, const std::string& idioma);
    void dizerOla() const;
    std::string executarComando(const std::string& comando);
    void definirIdioma(const std::string& novoIdioma);
    void atualizarVersao(const std::string& novaVersao);

    // Setters e Getters [cite: 33, 34]
    void setVolume(int novoVolume);
    int getVolume() const;
    void setMicrofoneAtivo(bool ativo);
    bool isMicrofoneAtivo() const;

    // Protótipos de métodos adicionais [cite: 34]
    void registrarLembrete(const std::string& lembrete, const std::string& dataHora);
    std::string resumoStatus() const;
};

#endif // ASSISTENTEVIRTUAL_H