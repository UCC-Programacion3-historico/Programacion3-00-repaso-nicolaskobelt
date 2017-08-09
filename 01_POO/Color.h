#ifndef REPASO_COLOR_H
#define REPASO_COLOR_H


#include <cstdint>

class Color {
private:
    char rojo;
    char verde;
    char azul;
public:
    uint32_t getColor();
    void tenirColor(uint8_t rojo, uint8_t verde, uint8_t azul);
};


#endif //REPASO_COLOR_H
