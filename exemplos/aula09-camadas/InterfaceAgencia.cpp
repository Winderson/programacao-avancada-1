#include <iostream>
using namespace std;

#include "InterfaceAgencia.h"

int InterfaceAgencia::leConta() {
    cout << "$$$ BANK DINHEIROS $$$" << endl << endl;
    cout << "Digite o numero da conta: ";

    int numero = 0;
    cin >> numero;

    // TODO: ler o nome do cliente
    // TODO: retornar um objeto do tipo conta

    return  numero;
}

void InterfaceAgencia::exibeMenu() {
    cout << "$$$ BANK DINHEIROS $$$" << endl << endl;
    cout << "MENU: " << endl;
    cout << "1) Saque" << endl;
    cout << "2) Deposito" << endl;
    cout << "3) Transferencia" << endl;
    cout << "4) Sair" << endl;
}

int InterfaceAgencia::leOpcao() {
    cout << "Opcao: ";
    int opcao = 0;

    cin >> opcao;
    return opcao;
}
