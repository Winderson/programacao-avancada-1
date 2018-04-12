#ifndef _PONTO_H_
#define _PONTO_H_

#include <iostream>

using namespace std;

class Ponto {
public:
    // CONSTRUTORES
    Ponto() : _x(0), _y(0) {}

    Ponto(double x, double y) : _x(x), _y(y) {}

    // DESTRUTOR
    virtual ~Ponto() {}

    // OPERACOES
    Ponto soma(Ponto ponto) {
        double x = _x + ponto._x;
        double y = _y + ponto._y;
        return Ponto(x, y);
    }

    Ponto operator+(Ponto ponto) {
        double x = _x + ponto._x;
        double y = _y + ponto._y;
        return Ponto(x, y);
    }


    Ponto subt(Ponto ponto) {
        return Ponto(_x - ponto._x, _y - ponto._y);
    }

    Ponto operator-(Ponto ponto) {
        return Ponto(_x - ponto._x, _y - ponto._y);
    }

    Ponto mult(Ponto ponto) {
        return Ponto(_x * ponto._x, _y * ponto._y);
    }

    Ponto operator*(Ponto ponto) {
        return Ponto(_x * ponto._x, _y * ponto._y);
    }

    Ponto mult(double e) {
        return Ponto(_x * e, _y * e);
    }

    Ponto operator*(double e) {
        return Ponto(_x * e, _y * e);
    }

    Ponto operator*(int e) {
        return Ponto(_x * e, _y * e);
    }

    Ponto divi(Ponto ponto) {
        return Ponto(_x / ponto._x, _y / ponto._y);
    }

    Ponto operator/(Ponto ponto) {
        return Ponto(_x / ponto._x, _y / ponto._y);
    }

    bool operator==(Ponto) {
        // TODO: retorna true se os dois pontos forem iguais
    }

    bool operator!=(Ponto) {
        // TODO: retorna true se os dois pontos forem diferentes
    }

    // TODO: >  se _x e _y forem maiores que x e y do outro ponto
    // TODO: >= se _x e _y forem maiores ou iguais que x e y do outro ponto
    // TODO: <  se _x e _y forem menores que x e y do outro ponto
    // TODO: <= se _x e _y forem menores ou iguais que x e y do outro ponto

    void operator+=(Ponto ponto) {
        _x += ponto._x;
        _y += ponto._y;
    }

    // TODO: -=
    // TODO: *= (ponto)
    // TODO: *= (escalar)
    // TODO: /= (escalar)

    // ++ponto
    Ponto operator++(int) {
        _x++;
        _y++;
        return Ponto(_x, _y);
    }

    // ponto++
    Ponto operator++() {
        Ponto antigo(_x, _y);
        _x++;
        _y++;
        return antigo;
    }

    // TODO: operator--

    // TODO: operator[]
    double operator[](int pos) {
        if (pos == 0) return _x;
        if (pos == 1) return _y;
        return -999;
    }

    // TODO: operator()
    double operator()(int pos) {
        if (pos == 0) return _x;
        if (pos == 1) return _y;
        return -999;
    }





    void imprime() {
        cout << "(" << _x << ", " << _y << ")" << endl;
    }

private:
    double _x;
    double _y;

};


#endif
