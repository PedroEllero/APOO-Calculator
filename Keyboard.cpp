#include "keyboard.hpp"
#include <iostream>
#include <array>



void KeyboardPedro::addKey(Key* key){
    if(this->keyscounter > 20){
        std::cout << 'Error' ; // tenq trocar para display
    }
    this->keyboardKeys[keyscounter] = key;
    keyscounter++;
}

void KeyboardPedro::receiveDigit(Digit digit){
    this->cpu->receiveDigit(digit);
}

void KeyboardPedro::receiveOperation(Operation operation){
    this->cpu->receiveOperation(operation);
}
void KeyboardPedro::receiveControl(Control control){
    this->cpu->receiveControl(control);
}