#include <iostream>
#include "Calculadora.h"

using namespace std;


int main() {
    Calculadora<int> calInt;
    Calculadora<char> calChar;
    Calculadora<float> calFloat;

    //int
    calInt.setA(4);
    calInt.setB(3);

    cout<< calInt.sumar()<<endl;
    cout<< calInt.dividir()<<endl;

    //char
    calChar.setA('a');
    calChar.setB('b');

    cout<< calChar.sumar()<<endl;
    cout<< calChar.dividir()<<endl;

    //float
    calFloat.setA(4);
    calFloat.setB(3);

    cout<< calFloat.sumar()<<endl;
    cout<< calFloat.dividir()<<endl;

    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}