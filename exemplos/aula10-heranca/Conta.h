#ifndef _CONTA_H_
#define _CONTA_H_

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Conta {
public:
    // Construtor
    Conta(long numero, string cliente) : _cliente(cliente),
                                         _numero(numero),
                                         _saldo(0) {
        cout << "Conta(" << numero << ", " << cliente << ")" << endl;
    }

    ~Conta() {
        cout << "~Conta()" << endl;
    }

    // Metodos

    void deposita(float quantia) {
        _saldo += int(quantia * 100);
    }

    void retira(float quantia) {
        _saldo -= int(quantia * 100);
    }

    void imprimeExtrato() {
        cout << "### EXTRATO - BANCO $$$ ###" << endl;
        cout << "Conta........: " << _numero << endl;
        cout << "Cliente......: " << _cliente << endl;
        cout << fixed << setprecision(2);
        cout << "Saldo........: " << _saldo / 100.0 << endl;
    }

    // Atributos e metodos protegidos nao sao visiveis por
    // outras classes, somente para as classes que herdam
    // - Atributos protegidos, nem sempre sao bem vistos..
protected:
    string _cliente;
    long _numero;
    int _saldo;
};


#endif //AULA10_HERANCA_CONTA_H
