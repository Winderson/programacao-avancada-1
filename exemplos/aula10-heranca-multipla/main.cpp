#include <iostream>
#include "Agenda.h"

int main() {
//    Agenda agenda;
//    agenda.Calendario::imprime(); // informa qual metodo base chamar
//    agenda.Relogio::imprime(); // informa qual metodo base chamar

    Agenda agendinha(12, 12, 2012, 12, 12, 12);
//    agendinha.imprime();
//    agendinha.Calendario::imprime();
//    agendinha.Relogio::imprime();

    // Ponteiros
    cout << "PONTEIROS!!!!" << endl;
    Agenda *ptr = nullptr;  // Em c++ inicializamos ponteiros com nullptr

    cout << "Imprime agenda ptr" << endl;
    ptr = &agendinha;
    ptr->imprime();

    // Polimorfismo
    // - Capacidade de um objeto assumir diferentes tipos
    cout << "Imprime calendario ptr" << endl;
    Calendario *ptrcal = &agendinha;
    ptrcal->imprime();

    cout << "Imprime relogio ptr" << endl;
    Relogio *ptrrel = &agendinha;
    ptrrel->imprime();








    cout << "FIM" << endl;
    return 0;
}
