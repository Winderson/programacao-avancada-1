#include <iostream>

#include "aluno.h"

int main() {

    // Instanciacao dos objetos
    // - Criacao dos objeto

    // Cria um objeto na stack
    Aluno aluno1;           // construtor default
    Aluno aluno2("Jose");   // construtor com inicializacao
    Aluno aluno3 = Aluno("Marcos");
    Aluno aluno4 = string("Wanderlay"); // Aluno aluno4("Wanderlay");
    Aluno aluno5 = 7;                   // Aluno aluno5(7);

    aluno2.anda();
    aluno2.estuda();


    // Cria um objeto na heap
    Aluno *aluno6 = new Aluno("Mateus");

    aluno6->estuda();
    aluno6->estuda();
    aluno6->fazProva();


    delete aluno6;
    cout << "foi" << endl;

    // criando um vetor de 100 alunos
    // - instancia 100 alunos
    // - Desperdicio de memoria, tempo, processamento
    // Solucoes:
    // - Criar um vetor de tamanho dinamico
    // - Criar um vetor de ponteiros
    Aluno *turma[100];
    //turma[0] = &aluno2;

    return 0;
}
