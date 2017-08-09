#include "Cuadrado.h"
#include <cmath>
float Cuadrado::getDiagonal() {
    return sqrt(alto*alto+ancho*ancho);

}
float Cuadrado::getSuperficie() {
    return alto*ancho;
}

float Cuadrado::getPerimetro() {
    return alto * 2 + 2 * ancho;
}