#ifndef SETUP_H
#define SETUP_H

#include <avr/io.h>
#include <stdbool.h>

enum portMapping{
    PA = 0,
    PB,
    PC,
    PD
};

#define  INPUT 0
#define OUTPUT 1

#define  LOW 0
#define HIGH 1


void pinMode(uint8_t _port, uint8_t _pin, uint8_t _dir);
void digitalWrite(uint8_t _port, uint8_t _pin, uint8_t _state);
bool digitalRead(uint8_t _port, uint8_t _pin);

#endif // SETUP_