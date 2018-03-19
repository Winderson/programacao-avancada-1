#include <iostream>

#include "aluno.h"

Aluno::Aluno() {
    cout << "Construtor Aluno()" << endl;
    _nome = "";
    _notas[0] = NOTA_MIN;
    _notas[1] = NOTA_MIN;
}

Aluno::Aluno(string nome) {
    cout << "Construtor Aluno(nome)" << endl;
    _nome = nome;
    _notas[0] = NOTA_MIN;
    _notas[1] = NOTA_MIN;
}

Aluno::Aluno(int nota) {
    cout << "Construtor Aluno(nota)" << endl;
    _nome = "";
    _notas[0] = nota;
    _notas[1] = nota;
}

Aluno::~Aluno() {
    cout << "Destrutor ~Aluno()" << endl;
}

string Aluno::getNome() {
    return _nome;
}

int Aluno::getNota1() {
    return VALIDA_NOTA(_notas[0]) ? _notas[0] : 0;
}

int Aluno::getNota2() {
    return VALIDA_NOTA(_notas[1]) ? _notas[1] : 0;
}

float Aluno::getMedia() {
    return (_notas[0] + _notas[1]) / 2.0f;
}

void Aluno::setNome(string nome) {
    _nome = nome;
}

void Aluno::setNota1(int nota) {
    _notas[0] = VALIDA_NOTA(nota) ? nota : 0;
}

void Aluno::setNota2(int nota) {
    _notas[1] = VALIDA_NOTA(nota) ? nota : 0;
}

void Aluno::estuda() {
    cout << _nome << " esta estudando.." << endl;
}

void Aluno::anda() {
    cout << _nome << " esta andando.." << endl;
}

void Aluno::fazProva() {
    cout << _nome << " esta fazendo prova.." << endl;
}
