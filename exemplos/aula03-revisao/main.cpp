#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// MAGIC NUMBER:
//  - Qualquer numero solto no meio do codigo
//  - Devem ser evitados!
//  - Substitui por constates

#define TAM_VETOR       100
#define SALDO           10
#define BONUS           320

//#define COPAS       1
//#define OUROS       2
//#define ESPADAS     3
//#define PAUS        4

// Utilizacao: definir conjunto de constantes que
// fazem parte de um mesmo grupo logico
// Permite programacao defensiva
// Permite melhor legibilidade de codigo
enum Naipes {
    COPAS = 1,
    OUROS = 2,
    ESPADAS = 4,
    PAUS = 8
};

// Registros (struct)
struct Aluno {
    string nome;
    int matricula;
    int nota[3];
};

struct Cor {
    int r, g, b;

    void imprime() {
        cout << "(" << r << ", " << g << ", " << b << ")" << endl;
    }

};

int main() {
    int soma = SALDO + BONUS;

    Naipes naipe = COPAS;
    naipe = ESPADAS;
    //naipe = 2; // ERRO!

    // VETORES:
    int vetor[TAM_VETOR]; // valor inicial = lixo

    int vet1[4] = {1, 2, 3, 4};
    int vet2[] = {1, 2, 3, 4};
    int vet3[8] = {1, 2, 3, 4}; // posicoes restantes sao inicializadas com 0
    int vet4[200] = {0};

    for (int i = 0; i < 4; i++) {
        cout << "vet1[" << i << "] = " << vet1[i] << endl;
    }

    for (int i = 0; i < 8; i++) {
        cout << "vet3[" << i << "] = " << vet3[i] << endl;
    }

    for (int i = 0; i < 200; i++) {
        cout << "vet4[" << i << "] = " << vet4[i] << endl;
    }

    // Em C++, um vetor eh um ponteiro para a primeira posicao de memoria
    printf(" vet1    = %p\n", vet1);
    printf("&vet1    = %p\n", &vet1);
    printf("&vet1[0] = %p\n", &vet1[0]);
    printf("&vet1[1] = %p\n", &vet1[1]);

    // Vetores de tamanhos dinamicos
    int *vet5 = NULL;

    // vet5 = (int *) malloc(sizeof(int) * 20);
    vet5 = new int[20];

    printf("&vet5 = %p\n", &vet5);
    printf(" vet5 = %p\n", vet5);

    // bad smell: praticas de programacao que levam a erro!
    //while (true) {
    //    new int[1000];
    //}


    // free(vet5)
    delete vet5;    // memory leak! (vazamento de memoria)

    Aluno joao;
    joao.matricula = 123;
    joao.nome = "Joao";
    joao.nota[0] = 10;
    joao.nota[1] = 9;
    joao.nota[2] = 5;
    cout << joao.nome << endl;

    Aluno maria = {
            "Maria",
            556,
            {8, 6, 4}
    };

    Cor cor = {255, 8, 44};
    cor.imprime();


    return 0;
}
