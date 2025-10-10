#include <iostream>
#include <cmath> // Para funções trigonométricas e pow
#include <cstdlib> // Para rand() e srand()
#include <ctime>   // Para time()
#include <iomanip> // Para std::fixed e std::setprecision

// --- Estrutura para Exercícios 1 e 2 ---
struct Ponto {
    float x;
    float y;
};

// --- Classe para Exercício 4 ---
class Dado {
private:
    int numeroFaces;
public:
    // Construtor padrão para alocação de array
    Dado() : numeroFaces(6) {}

    // Construtor com parâmetro
    Dado(int faces) {
        setFaces(faces);
    }

    // Setter
    void setFaces(int faces) {
        if (faces > 0) {
            numeroFaces = faces;
        } else {
            numeroFaces = 6; // Valor padrão
        }
    }

    // Método para rolar o dado
    int rolar() const {
        return (rand() % numeroFaces) + 1;
    }
};


// --- Funções para cada exercício ---
void exercicio1() {
    std::cout << "\n--- Exercicio 1: Pontos na Reta ---\n";
    Ponto p1, p2;
    int n;

    std::cout << "Digite as coordenadas do ponto P1 (x1 y1): ";
    std::cin >> p1.x >> p1.y;
    std::cout << "Digite as coordenadas do ponto P2 (x2 y2): ";
    std::cin >> p2.x >> p2.y;
    std::cout << "Digite o numero de pontos intermediarios a gerar: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "Numero de pontos deve ser pelo menos 2." << std::endl;
        return;
    }

    Ponto* pontos = new Ponto[n];
    float delta_t = 1.0f / (n - 1);

    for (int i = 0; i < n; ++i) {
        float t = i * delta_t;
        pontos[i].x = p1.x + t * (p2.x - p1.x);
        pontos[i].y = p1.y + t * (p2.y - p1.y);
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pontos gerados:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "P" << i << ": (" << pontos[i].x << ", " << pontos[i].y << ")" << std::endl;
    }

    delete[] pontos;
}

void exercicio2() {
    std::cout << "\n--- Exercicio 2: Pontos na Circunferencia ---\n";
    int n;
    float r;
    const float PI = 3.1415926535;

    std::cout << "Digite o numero de pontos a gerar na circunferencia: ";
    std::cin >> n;
    std::cout << "Digite o raio do circulo (0.0 < r <= 10.0): ";
    std::cin >> r;

    if (n <= 0 || r <= 0.0 || r > 10.0) {
        std::cout << "Valores invalidos." << std::endl;
        return;
    }

    Ponto* pontos = new Ponto[n];
    float delta_theta = 2 * PI / n;

    for (int i = 0; i < n; ++i) {
        float theta = i * delta_theta;
        pontos[i].x = r * cos(theta);
        pontos[i].y = r * sin(theta);
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pontos gerados:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "P" << i << ": (" << pontos[i].x << ", " << pontos[i].y << ")" << std::endl;
    }

    delete[] pontos;
}

void exercicio3() {
    std::cout << "\n--- Exercicio 3: Simulacao de Estacionamento ---\n";
    int numVagas;
    std::cout << "Digite o numero de vagas do estacionamento (5 a 15): ";
    std::cin >> numVagas;

    if (numVagas < 5 || numVagas > 15) {
        std::cout << "Numero de vagas invalido." << std::endl;
        return;
    }

    int* vagas = new int[numVagas](); // Inicializa com zeros

    for (int hora = 1; hora <= 24; ++hora) {
        std::cout << "\n--- HORA " << hora << " ---" << std::endl;

        // Decrementa o tempo dos carros existentes
        for (int i = 0; i < numVagas; ++i) {
            if (vagas[i] > 0) {
                vagas[i]--;
            }
        }

        // Novo carro tenta entrar
        bool vagaEncontrada = false;
        for (int i = 0; i < numVagas; ++i) {
            if (vagas[i] == 0) {
                vagas[i] = (rand() % 5) + 1; // Sorteia tempo de 1 a 5 horas
                std::cout << "Novo carro entrou na vaga " << i+1 << " por " << vagas[i] << " horas." << std::endl;
                vagaEncontrada = true;
                break;
            }
        }

        if (!vagaEncontrada) {
            std::cout << "Estacionamento cheio! O carro nao entrou." << std::endl;
        }

        // Imprime o estado do estacionamento
        std::cout << "Estado do Estacionamento: [ ";
        for (int i = 0; i < numVagas; ++i) {
            std::cout << vagas[i] << " ";
        }
        std::cout << "]" << std::endl;
    }

    delete[] vagas;
}

void exercicio4() {
    std::cout << "\n--- Exercicio 4: Dado Virtual ---\n";
    // a) Ponteiro para um dado de 6 faces
    std::cout << "a) Alocando um dado de 6 faces:\n";
    Dado* dado6 = new Dado(6);
    std::cout << "Rolagem unica: " << dado6->rolar() << std::endl;
    delete dado6; // Libera a memória

    // b) Array de 3 dados
    std::cout << "\nb) Alocando um array de 3 dados:\n";
    Dado* dados = new Dado[3];
    dados[0].setFaces(6);
    dados[1].setFaces(8);
    dados[2].setFaces(12);

    int facesArray[] = {6, 8, 12};
    for(int i = 0; i < 3; ++i) {
        std::cout << "Rolando 3x o dado de " << facesArray[i] << " faces: ";
        for(int j = 0; j < 3; ++j) {
            std::cout << dados[i].rolar() << " ";
        }
        std::cout << std::endl;
    }
    delete[] dados; // Libera a memória do array
}

int main() {
    srand(time(0)); // Inicializa a semente do gerador aleatório

    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();

    return 0;
}