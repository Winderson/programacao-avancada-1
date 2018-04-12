#include <iostream>
#include "ponto.h"

using namespace std;

int main() {
    Ponto p1(1, 2);
    Ponto p2(3, 4);
    Ponto p3(8, 8);
    Ponto p4(-2, -7);

    // As seguintes construcoes sao equivalentes
    //Ponto somaa = p1.soma(p2);
    //Ponto somab = p1.operator+(p2);

    // soma = p1 + p2 + p3 + p4
    Ponto soma1 = p1.soma(p2.soma(p3.soma(p4)));
    Ponto soma2 = p1 + p2 + p3 + p4;

    // result = 3 * p1 + p2 - p3 / (p1 + p2)
    Ponto parte1 = p1.mult(3);
    Ponto parte2 = parte1.soma(p2.subt(p3));
    Ponto parte3 = p1.soma(p2);
    Ponto parte4 = parte2.divi(parte3);

    // Podemos sobrescrever qualquer operador de c++
    // Os operadores respeitam sempre a ordem de
    // precedencia da linguagem.
    //  p = p1 + p2 * p3;

    // A operacao 3 * p1 nao eh possivel pois a operacao
    // int * ponto nao foi sobrecarregada para inteiros
    // - a sobrecarga para tipos primitivos eh possivel
    // de ser realizada usando funcoes amigas
    Ponto result = p1 * 3 + p2 - p3 / (p1 + p2);


    soma1.imprime();
    soma2.imprime();


    parte4.imprime();
    result.imprime();


    cout << p1[0] << ", " << p1[1] << endl;
    cout << p1(0) << ", " << p1(1) << endl;


    // TODO: Ver como melhorar isso
    //cout << p1 << " + " << p2 << " = " << soma << endl;

    return 0;
}
