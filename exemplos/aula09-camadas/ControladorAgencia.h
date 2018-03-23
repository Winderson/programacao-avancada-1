#ifndef _CONTROLADOR_AGENCIA_H_
#define _CONTROLADOR_AGENCIA_H_

#include "InterfaceAgencia.h"
#include "Conta.h"

class ControladorAgencia {
public:
    ControladorAgencia() : _view(InterfaceAgencia()),
                           _contas(new Conta*[100]),
                           _numContas(0){
        //vazio
    }

    ~ControladorAgencia() {
        for (int i = 0; i < _numContas; i++) {
            if (_contas[i] != NULL) {
                delete _contas[i];
            }
        }

        delete[] _contas;
    }

    void executa();

private:
    void trataOpcao(int opcao, Conta &conta);

    InterfaceAgencia _view;
    Conta **_contas;    // Evita a chamada de 100x o construtor
    int _numContas;
};


#endif //AULA09_CAMADAS_CONTROLADORAGENCIA_H
