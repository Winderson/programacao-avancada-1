#ifndef _AGENDA_H_
#define _AGENDA_H_

#include "Relogio.h"
#include "Calendario.h"

class Agenda : public Relogio, public Calendario {
public:

    Agenda() : Relogio(0, 0, 0),
               Calendario(0, 0, 0) {
        cout << "Construtor Agenda!" << endl;
    }

    Agenda(int dia, int mes, int ano,
           int hora, int min, int seg) : Relogio(hora, min, seg),
                                         Calendario(dia, mes, ano) {
        cout << "Construtor Agenda!" << endl;
    }

    virtual ~Agenda() {
        cout << "Destrutor Agenda!" << endl;
    }

    // Sobrescrever o metodo imprime!
    void imprime() {
        cout << "---" << endl;
        Calendario::imprime();
        Relogio::imprime();
        cout << "---" << endl;
    }

};

#endif //AULA10_HERANCA_MULTIPLA_AGENDA_H
