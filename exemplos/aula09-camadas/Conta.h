#ifndef _CONTA_H_
#define _CONTA_H_

#include <string>

class Conta {
public:

    Conta(int numero, std::string cliente) :
            _numero(numero),
            _saldo(0),
            _cliente(cliente) {
        // vazio
    }

    double getSaldo() {
        return _saldo / 100;
    }

    std::string getCliente() {
        return _cliente;
    }

    void deposita(double quantia) {
        _saldo += int(quantia * 100);
    }

    void retira(double quantia) {
        _saldo -= int(quantia * 100);
    }

    void transfere(Conta &outra, double quantia) {
        retira(quantia);
        outra.deposita(quantia);
    }

private:
    // ATRIBUTOS
    int _numero;
    int _saldo;
    std::string _cliente;

};


#endif //AULA09_CAMADAS_CONTA_H
