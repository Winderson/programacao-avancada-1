#ifndef _JACARE_H_
#define _JACARE_H_

#include "Animal.h"

class Jacare : public Animal {
public:
    Jacare(std::string nome) : Animal(nome) {
        std::cout << "Construtor Jacare(" << nome  << ")" << std::endl;
        std::cout << "> Alocando muita memoria" << std::endl;

    }

    virtual ~Jacare() {
        std::cout << "Destrutor Jacare()" << std::endl;
        std::cout << "> Desalocando toda memoria" << std::endl;
    }

    virtual void morder() const {
        std::cout << "NHAC!" << std::endl;
    }
};



#endif
