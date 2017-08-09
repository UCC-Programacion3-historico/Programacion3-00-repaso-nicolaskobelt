#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int> calc;

    calc.setB(4);
    calc.setA(2);

    try {
        cout<< calc.dividir()<<endl;
    }catch(int e){
        cout<< "B no puede ser cero wacho"<< e <<endl;
    }
    cout << "Ejercicio 00/03\n" << endl;
    return 0;
}