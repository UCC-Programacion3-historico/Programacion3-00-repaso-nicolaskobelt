#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include <cmath>

using namespace std;

int main() {

    Cuadrado c;
    cout<<"Diagonal"<<c.getDiagonal()<<endl;

    c.setAncho(30);
    c.setAlto(30);

    cout << "Ejercicio 00/01\n" << endl;
    return 0;
}