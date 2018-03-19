#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <iostream>
#include <string>

using namespace std;

#include "disciplina.h"

// Quando implementar metodos inline?
// - Para construtores
// - Metodos simples e enxutos (ate umas 10 linhas)

class Aluno {
public:

    // Inicializando os atributos antes da instanciacao
    // - a ordem deve respeitar a ordem de declaracao
    // dos atributos
//    Aluno() : _nome(""),
//              _disciplina(Disciplina("sem nome", 0)) {
//        cout << "Aluno()" << endl;
//    }

    Aluno(string nome = "") :
                         _nome(nome),
                         _disciplina(Disciplina("sem nome", 0)) {
        cout << "Aluno(nome)" << endl;
    }

    void imprime() const {
        cout << _nome << endl;
        _disciplina.imprime();
    }

    void setNome(string nome) {
        _nome = nome;
    }

private:
    string _nome;
    Disciplina _disciplina;
};

// FUNCOES INLINE
// Funcionam da mesma maneira que as macros
// - Validacao dos tipos dos parametros
// - Sintaxe igual a de funcoes
// - Transparente para o pgmador

// evita a chamada de funcoes na pilha
// - sempre devem ser definidas e implementadas no .h
// - nao podem ser muito complexas! afetam tempo de compilacao
// e ganho final nao grande
inline int max(int x, int y) {
    return x > y ? x : y;
}











#endif
