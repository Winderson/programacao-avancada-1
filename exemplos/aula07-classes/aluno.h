#ifndef _ALUNO_H_
#define _ALUNO_H_

// 0. Inclusao de bibliotecas
// - somente quando alguma definicao for necessaria no .h
#include <string>

using namespace std;

// 1. definicao de constantes
#define NOTA_MIN    0
#define NOTA_MAX    10

#define VALIDA_NOTA(nota) \
    (nota) <= NOTA_MAX && (nota) >= NOTA_MIN

// 2. definicao de tipos

class Aluno {
public:
    // CONSTRUTORES
    // Usados para inicializar atributos

    // SINTAXE: Mesmo nome da classe, sem retorno
    // Se nenhum construtor for definido, o construtor default eh criado pelo compilador
    Aluno();
    Aluno(string nome);
    Aluno(int nota);

    // DESTRUTOR
    // So eh utilizado para desalocar recursos
    ~Aluno();

    // METODOS - ACESSORES (getters)
    // acessa/le o conteudo de um atributo
    string getNome();
    int getNota1();
    int getNota2();
    float getMedia();

    // METODOS - MUTANTES (setters)
    // altera o conteudo de um atributo
    void setNome(string nome);
    void setNota1(int nota);
    void setNota2(int nota);

    // METODOS - GERAIS
    void estuda();
    void anda();
    void fazProva();

private:
    // ATRIBUTOS
    // SEMPRE DEVEM SER PRIVADOS!!!

    // Convencao: atributos iniciados por _
    //            evitar conflitos de nome
    string _nome;
    int _notas[2];

};

// 3. Definicao de funcoes ()

#endif //_ALUNO_H_
