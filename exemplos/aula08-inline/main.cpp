#include <iostream>

#include "aluno.h"
#include "eleitor.h"

// Funcoes que recebem objetos por valor
// - Sera feita uma copia do objeto sempre
// - Gera problema de desempenho
void imprime(Aluno aluno) {
    aluno.imprime();
}

// Solucao: passagem de parametros por referencia (ponteiros)
// - sempre passar objetos por referencia!
void imprime1(Aluno *aluno) {
    aluno->imprime();
}

// Passagem de parametros por referencia
// - Em C++ temos o tipo referencia
// - Um tipo referencia deve receber o endereco de uma variavel
// na sua declaracao, e esse valor nao pode ser alterado
void imprime2(const Aluno &aluno) {
    aluno.imprime();
}

// Daqui pra frente, objetos sempre passados por
// referencia!!

void count() {
    static int i = 0;
    i++;

    cout << i << endl;
}


int main() {
    Aluno aluno1("Maria");
    Aluno aluno2("Jefferson");
    Aluno aluno3(aluno1);   // construtor de copia

    imprime(aluno1);
    imprime2(aluno1);
    imprime1(&aluno1);

    //  Referencia funciona como um apelido
    // outro nome para uma variavel ja existente
    int varA = 10;
    int &refA = varA;

    cout << "varA: " << varA << endl;
    cout << "refA: " << refA << endl;
    refA = 1000;
    cout << "varA: " << varA << endl;
    cout << "refA: " << refA << endl;

    count();
    count();
    count();
    count();

    Eleitor e1("Jonas");
    Eleitor e2("Joel");
    Eleitor e3("Joremias");


    return 0;
}
