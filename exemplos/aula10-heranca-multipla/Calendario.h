#ifndef _CALENDARIO_H_
#define _CALENDARIO_H_

#include <iostream>

using namespace std;

class Calendario {
public:
    Calendario(int d, int m, int a) : _dia(d),
                                      _mes(m),
                                      _ano(a) {
        cout << "Construtor Calendario!" << endl;
    }

    virtual ~Calendario() {
        cout << "Construtor Calendario!" << endl;
    }

    virtual void imprime() {
        cout << _dia << "/";
        cout << _mes << "/";
        cout << _ano << endl;
    }


private:
    int _dia;
    int _mes;
    int _ano;
};


#endif //AULA10_HERANCA_MULTIPLA_CALENDARIO_H
