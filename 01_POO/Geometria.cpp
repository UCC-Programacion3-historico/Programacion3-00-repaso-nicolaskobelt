#include "Geometria.h"

Geometria::Geometria(int al, int an){
    alto = al;
    ancho=an;
}

int Geometria::getAlto() { return alto;}

int Geometria::getAncho() { return ancho;}

void Geometria::setAlto(int al) { alto=al;}

void Geometria::setAncho(int an) { ancho= an;}
