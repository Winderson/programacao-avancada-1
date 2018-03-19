#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_

#include <string>
using namespace std;


class Disciplina {
public:
    Disciplina();
    Disciplina(string nome, int cargaHoraria);

    void imprime() const;

private:
    string _nome;
    int _cargaHoraria;
};

inline Disciplina::Disciplina() : _nome(""),
                                  _cargaHoraria(0) {
}

inline Disciplina::Disciplina(string nome,
                              int cargaHoraria) :
                                  _nome(nome),
                                  _cargaHoraria(cargaHoraria) {
}

inline void Disciplina::imprime() const {
    cout << _nome << ": " << _cargaHoraria << endl;
}



#endif
