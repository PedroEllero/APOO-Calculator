#include "calculator.hpp"



class KeyboardPedro: public Keyboard{


    Key* keyboardKeys[20];
    int keyscounter = 0;

    void addKey(Key* );
    void receiveDigit(Digit );
    void receiveOperation(Operation );
    void receiveControl(Control );

};