#ifndef REPASO_CALCULADORA_H
#define REPASO_CALCULADORA_H


template<class T>

class Calculadora {
    T A;
    T B;
public:
    T getA() const {
        return A;
    }

    T getB() const {
        return B;
    }

    void setA(T A) {
        Calculadora::A = A;
    }

    void setB(T B) {
        Calculadora::B = B;
    }

public:
    T sumar(){
        return A + B;
    }

    T restar(){
        return A - B;
    }

    T multiplicar(){
        return A * B;
    }

    T dividir(){
        if (B==0){
            throw 3;
        }
        return A / B;
    }
};


#endif //REPASO_CALCULADORA_H
