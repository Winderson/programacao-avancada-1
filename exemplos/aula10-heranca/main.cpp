#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"

int main() {

    Conta conta1(1234, "Donald");
    conta1.deposita(1000);
    conta1.retira(5.99);
    conta1.retira(12.99);
    conta1.imprimeExtrato();

    cout << endl << endl;

    ContaCorrente conta2(2345, "Margarida");
    conta2.deposita(500);
    conta2.retira(50.34);
    conta2.deposita(2500);
    conta2.imprimeExtrato();

    cout << endl << endl;

    // Polimorfismo!
    Conta conta3 = conta2;
    conta3.imprimeExtrato();

    return 0;
}
