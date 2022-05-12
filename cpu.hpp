#include "calculator.hpp"

class CpuPedro: public Cpu{
    
    int contador = 0;
    int operador = 0;
    char array[20];
    char operando1[8];
    char operando2[8];
    float operando3;
    float operando4;
    char toChar(Digit );
    char toChar(Operation );
    char toChar(Control );
    char breakArray();
    void stringToFloat();

    float matematica();
    public:
    void receiveDigit(Digit );
    void receiveOperation(Operation );
    void receiveControl(Control );
};
