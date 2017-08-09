#include "Color.h"
#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H


class Geometria {
protected:
    int alto, ancho;
public:
    Color col;
    Geometria(int, int);
    Geometria();

    int getAlto();
    int getAncho();

    void setAlto(int alto);
    void setAncho(int ancho);

    virtual float getSuperficie()=0;
    virtual float getPerimetro()=0;

};


#endif //REPASO_GEOMETRIA_H
