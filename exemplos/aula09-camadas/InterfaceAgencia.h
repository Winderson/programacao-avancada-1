#ifndef _INTERFACE_AGENCIA_H_
#define _INTERFACE_AGENCIA_H_

#include "Conta.h"

class InterfaceAgencia {
public:

    Conta leConta();

    void exibeMenu();
    int leOpcao();

    void exibeErroOpcaoInvalida();

    double exibeDeposito();
    double exibeSaque();
    void exibeExtrato(Conta &conta);
};


#endif //AULA09_CAMADAS_INTERFACEAGENCIA_H
