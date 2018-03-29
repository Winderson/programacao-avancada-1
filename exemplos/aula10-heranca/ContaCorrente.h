#ifndef _CONTA_CORRENTE_H_
#define _CONTA_CORRENTE_H_

#include "Conta.h"

// A definicao da heranca eh feita na declaracao da classe
// C++ possui 3 tipos de heranca: indicando como os elementos
//  publicos serao herdados

// Se o modificador for public:
//      - todos public    do pai sao herdados como public
//      - todos protected do pai sao herdados como protected
//      - todos private   do pai sao herdados como private
// Se o modificador for protected:
//      - todos public    do pai sao herdados como protected
//      - todos protected do pai sao herdados como protected
//      - todos private   do pai sao herdados como private
// Se o modificador for private:
//      - todos public    do pai sao herdados como private
//      - todos protected do pai sao herdados como private
//      - todos private   do pai sao herdados como private

class ContaCorrente : public Conta {
public:

    // Construtores nao sao herdados
    // - Todo contrutor deve chamar o construtor da classe pai
    ContaCorrente() : Conta(0, ""),
                      _juros(0) {
        cout << "ContaCorrente(0, \"\")" << endl;
    }

    ContaCorrente(int numero, string cliente) : Conta(numero, cliente),
                                                _juros(0) {
        cout << "ContaCorrente(" << numero << ", " << cliente << ")" << endl;
    }

    ~ContaCorrente() {
        cout << "~ContaCorrente()" << endl;
    }

    // SOBRESCRITA DE METODOS
    // Declara o mesmo metodo da classe pai e reimplementa ele
    void imprimeExtrato() {
        cout << "###########################" << endl;
        cout << "### EXTRATO - BANCO $$$ ###" << endl;
        cout << "#####  CONTA CORRENTE #####" << endl;
        cout << "###########################" << endl;
        cout << "Conta........: " << _numero << endl;
        cout << "Cliente......: " << _cliente << endl;
        cout << fixed << setprecision(2);
        cout << "Saldo........: " << _saldo / 100.0 << endl;
    }

private:
    double _juros;

};


#endif //AULA10_HERANCA_CONTACORRENTE_H
