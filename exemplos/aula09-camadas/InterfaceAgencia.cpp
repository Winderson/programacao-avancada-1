#include <iostream>

using namespace std;

#include "InterfaceAgencia.h"

Conta InterfaceAgencia::leConta() {
    cout << "$$$ BANK DINHEIROS $$$" << endl << endl;
    cout << "Digite o numero da conta: ";

    int numero = 0;
    cin >> numero;

    string nome = "";
    getline(cin, nome);

    return Conta(numero, nome);
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

void InterfaceAgencia::exibeErroOpcaoInvalida() {
    cerr << "Opcao Invalida!" << endl;
}

double InterfaceAgencia::exibeDeposito() {
    cout << "Digite a quantia para deposito: ";
    double quantia = 0;
    cin >> quantia;
    return quantia;
}

double InterfaceAgencia::exibeSaque() {
    cout << "Digite a quantia para saque: ";
    double quantia = 0;
    cin >> quantia;
    return quantia;
}

void InterfaceAgencia::exibeExtrato(Conta &conta) {
    cout << "### EXTRATO ###" << endl;
    cout << "Cliente.........: " << conta.getCliente() << endl;
    cout << "Saldo...........: " << conta.getSaldo() << endl;

}
