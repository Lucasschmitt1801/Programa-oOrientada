#ifndef ANAMNESE_H
#define ANAMNESE_H

#include <string>
#include <vector>

class Anamnese {
private:
    std::string nome;
    int idade;
    double pesokg;
    double alturaM;
    std::string alergias;
    std::string doencasPreExistentes;
    std::string medicamentosEmUso;

public:
    // Construtores [cite: 17]
    Anamnese();
    Anamnese(const std::string& nome, int idade, double pesokg, double alturaM,
             const std::string& alergias, const std::string& doencas, const std::string& meds);

    // Getters e Setters [cite: 17]
    void setNome(const std::string& nome);
    std::string getNome() const;

    void setIdade(int idade);
    int getIdade() const;

    void setPesoKg(double pesokg);
    double getPesoKg() const;

    void setAlturaM(double alturaM);
    double getAlturaM() const;

    void setAlergias(const std::string& alergias);
    std::string getAlergias() const;

    void setDoencasPreExistentes(const std::string& doencas);
    std::string getDoencasPreExistentes() const;

    void setMedicamentosEmUso(const std::string& meds);
    std::string getMedicamentosEmUso() const;

    // Protótipos de métodos adicionais [cite: 18]
    double calcularIMC() const;
    std::string gerarResumo() const;
};

#endif // ANAMNESE_H