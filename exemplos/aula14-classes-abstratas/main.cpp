#include <iostream>
#include "Animal.h"
#include "Jacare.h"

int main() {

    // ERRO: nao podemos instanciaar um objeto de uma classe abstrata
    //Animal *animal = new Animal("Generico");
    //animal->morder();

    Jacare *jacare = new Jacare("Aligatorson");
    jacare->morder();

    // Polimorfismo: Uma variavel de uma classe base pode
    // referenciar qualquer variavel do tipo derivada
    //std::cout << "---------------------------" << std::endl;
    //Animal *ptr1 = animal;
    //ptr1->morder();

    // Comportamento padrao do C++: Chama a implementacao
    // do tipo do ponteiro e nao do tipo do objeto
    std::cout << "---------------------------" << std::endl;
    Animal *ptr2 = jacare;
    ptr2->morder();

    std::cout << *jacare;

    //delete animal;
    delete ptr2;

    return 0;
}
