#ifndef _RELOGIO_H_
#define _RELOGIO_H_

#include <iostream>
using namespace std;

class Relogio {
public:
    Relogio(int h, int m, int s) : _hora(h),
                                   _minuto(m),
                                   _segundo(s) {
        cout << "Construtor Relogio!" << endl;
    }

    virtual ~Relogio() {
        cout << "Destrutor Relogio!" << endl;
    }

    virtual void imprime() {
        cout << _hora << ":";
        cout << _minuto << ":";
        cout << _segundo << endl;
    }

private:
    int _hora;
    int _minuto;
    int _segundo;
};

#endif //AULA10_HERANCA_MULTIPLA_RELOGIO
