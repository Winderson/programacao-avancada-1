#ifndef _CONTROLADOR_AGENCIA_H_
#define _CONTROLADOR_AGENCIA_H_

#include "InterfaceAgencia.h"
#include "Conta.h"

class ControladorAgencia {
public:
    ControladorAgencia() : _view(InterfaceAgencia()) {
        //vazio
    }

    void executa();

private:
    void trataOpcao(int opcao, Conta &conta);

    InterfaceAgencia _view;
};


#endif //AULA09_CAMADAS_CONTROLADORAGENCIA_H
