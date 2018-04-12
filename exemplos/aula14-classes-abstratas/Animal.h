#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <string>
#include <iostream>

class Animal {
public:
    Animal(std::string nome = "") : _nome(nome) {
        std::cout << "Construtor Animal(" << nome  << ")" << std::endl;
    }

    virtual ~Animal() {
        std::cout << "Destrutor Animal()" << std::endl;
    }

//    virtual void morder() const {
//        std::cout << _nome << " esta mordendo" << std::endl;
//    }

    // Declaracao de umetodo virtual puro
    // - Metodo abstrato
    virtual void morder() const = 0;


private:
    std::string _nome;

};

inline std::ostream &operator<<(std::ostream &out, Animal &animal) {
    out << "Imprimindo objeto: \n";
    //out << animal.getNome() << '\n';
    out << "--------------\n";
    return out;
}




#endif
