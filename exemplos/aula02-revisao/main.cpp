//Copyright (c) 2018 Chaua Company
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//        of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//        to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//        copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//        The above copyright notice and this permission notice shall be included in all
//        copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//        AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//SOFTWARE.

// diretivas de pre-compilacao
// - Ocorre antes da compilacao
// - Processamento do arquivo-fonte

#include <iostream>       // arquivos na instalacao do sistema
#include <cstdio>         // arquivos na instalacao do sistema
#include <cmath>          // arquivos na instalacao do sistema

#include "meu_include.h"  // arquivos locais

#define DEBUG 0
#define TAM 100
#define MAX(x, y) ((x) > (y) ? (x) : (y))

// namespace: espaco de nomes
// - evita conflitos de nomes
// - usada para compartilhamento de libs

namespace pipoca {
    int valor = 10;
}

// importa todas as funcoes do namespace para o contexto atual
using namaspace
std;

//#define PI 4

// PROGRAMA PRINCIPAL
int main() {

    pipoca::valor = 20;

    std::cout << "Hello, World!" << std::endl;
    std::cout << TAM << std::endl;
    std::cout << MAX(10 + 20, 20) << std::endl;

#if DEBUG
    std::cout << "Debug ligado!" << std::endl;
#endif

    cout << "Funcionou!" << endl;

    // TIPOS DE DADOS

    // Numericos
    //      int         Inteiros    0, 1, 2, 3, -10, 0444, 0xABCD
    //      float       Reais       0.12f, 12e10, 12e-10
    //      double      Reais       0.12

    // Booleano
    //      bool        Booleano    true (!= 0), false (0)

    // Char
    //      char        Caractere   65, 'A'
    //      w_char      Caractere unicode

    // String
    //      std::string Classe que representa uma string "texto"
    //      char *

    // OPERADORES
    //  - ARITMETICOS: numero operador numero => numero
    //      + - * / %
    //  - RELACIONAIS: numero operador numero => booleano
    //      == != > >= < <=
    //  - LOGICOS: booleno operador booleano => booleano
    //      ! && || not and or


    int x, y;
    cin >> x;

    // COMANDOS DE DECISAO

    if (x == 10) {
        x = 12;
    }

    if (x == 10) {
        x = 12;
    } else {
        x = 19;
    }

    int imc;

    if (imc < 19) {
        // ...
    } else if (imc >= 19 and imc < 25) {
        // ...
    } else if (x == 10 or y == 20) {
        // ...
    }


    switch (x) {
        case 2:
            break;
        case 3:
            break;
        case 4:
        case 5:
            break;
        default:
            imc = 10;
    }


    // Isso eh fundamental por..
    while (true) {
        // ...
    }

    do {

    } while (true);

    for (int i = 0; i < 10; i++) {

    }

    return 0;
}
