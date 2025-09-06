#ifndef SMARTHOUSE_H
#define SMARTHOUSE_H

#include <string>

class SmartHouse {
private:
    bool luzesLigadas;
    double temperaturaDesejada;
    bool alarmeAtivo;
    bool portaTrancada;
    std::string modo; // Ex: "Normal", "Férias", "Noite"

public:
    // Construtores e métodos [cite: 38, 39]
    SmartHouse();
    void ligarLuzes();
    void desligarLuzes();
    void setTemperatura(double temp);
    double getTemperatura() const;
    void ativarAlarme();
    void desativarAlarme();
    void trancarPorta();
    void destrancarPorta();
    void setModo(const std::string& novoModo);
    std::string getModo() const;

    // Protótipos de métodos adicionais [cite: 39]
    std::string status() const;
    void aplicarCena(const std::string& nomeCena); // Ex: "Cinema", "Jantar"
};

#endif // SMARTHOUSE_H