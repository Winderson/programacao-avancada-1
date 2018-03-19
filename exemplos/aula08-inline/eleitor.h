#ifndef _ELEITOR_H_
#define _ELEITOR_H_

#include <iostream>
#include <string>
using namespace std;

class Eleitor {
public:
    Eleitor(string nome = "") : _nome(nome) {
        _numEleitores++;
        cout << _nome << endl;
        cout << Eleitor::_numEleitores << endl;
    }

private:
    string _nome;
    static int _numEleitores; // pertence ao contexto da classe
};

// Declara a variavel estatica
int Eleitor::_numEleitores;

#endif
