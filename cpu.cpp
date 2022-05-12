#include "cpu.hpp"
#include <iostream>
#include <string>
#include <math.h>

char CpuPedro::toChar(Digit digit){
    switch(digit){
        case ZERO:
            return '0';
        case ONE:
            return '1';
        case TWO:
            return '2';
        case THREE:
            return '3';
        case FOUR:
            return '4';
        case FIVE:
            return '5';
        case SIX:
            return '6';
        case SEVEN:
            return '7';
        case EIGHT:
            return '8';
        case NINE:
            return '9';
        default:
            return 'ERROR';
    }
  }

char CpuPedro::toChar(Operation operation){
    switch(operation){
        case ADDITION:
            return '+';
        case SUBTRACTION:
            return '-';
        case DIVISION:
            return '/';
        case MULTIPLICATION:
            return '*';
        case SQUARE_ROOT:
            return '~';
        case PERCENTAGE:
            return '%';
    }
}

char CpuPedro::toChar(Control control){
    switch(control){
        case CLEAR:
            return 'C';
        case RESET:
            return 'R';
        case DECIMAL_SEPARATOR:
            return '.';
        case MEMORY_READ_CLEAR:
            return 'M';
        case MEMORY_ADDITION:
            return 'A';
        case MEMORY_SUBTRACTION:
            return 'S';
        case EQUAL:
            return '=';
    }
}

void CpuPedro::receiveDigit(Digit digit){
    if(digit == NULL){
        std::cout << 'Error' ; //tenq trocar para display
    }
    char digitToChar = this->toChar(digit);

    array[contador] = digitToChar;
    contador += 1;
}


void CpuPedro::receiveOperation(Operation operation){
        if(operation == NULL){
            std::cout << 'Error' ; //tenq trocar para display
        }

    char opToChar = this->toChar(operation);
    array[contador] = opToChar;
    contador += 1;

}


char CpuPedro::breakArray(){
    for(int i=0; i<contador; i++){


        while(array[i] != '+' || array[i] != '-' || array[i] != '*' || array[i] != '/' || array[i] != '~' || array[i] != '%'){
            operando1[i] = array[i];
        }
        operador = array[i];
        i+=1;
        while(array[i] != '+' || array[i] != '-' || array[i] != '*' || array[i] != '/' || array[i] != '~' || array[i] != '%'){
            operando2[i] = array[i];
        }
    }

}


void CpuPedro::stringToFloat(){
operando3 = std::stof(operando1);
operando4 = std::stof(operando2);
}


float CpuPedro::matematica(){

switch(operador){
    case '+':
        return operando3 + operando4;
    case '-':
        return operando3 - operando4;
    case '*':
        return operando3 * operando4;
    case '/':
        return operando3 / operando4;
    case '%':
        return (operando3/100)*operando4;
    case '~':
        return sqrt(operando3);

}
}