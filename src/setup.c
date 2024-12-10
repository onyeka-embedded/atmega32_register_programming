#include "setup.h"

void pinMode(uint8_t _port, uint8_t _pin, uint8_t _dir)
{
    switch (_port)
    {
    case 0:
        if (_dir == INPUT)
            DDRA &= ~(1 << _pin);
        else if (_dir == OUTPUT)
            DDRA |= (1 << _pin);
    case 1:
        if (_dir == INPUT)
            DDRB &= ~(1 << _pin);
        else if (_dir == OUTPUT)
            DDRB |= (1 << _pin);
    case 2:
        if (_dir == INPUT)
            DDRC &= ~(1 << _pin);
        else if (_dir == OUTPUT)
            DDRC |= (1 << _pin);
    case 3:
        if (_dir == INPUT)
            DDRD &= ~(1 << _pin);
        else if (_dir == OUTPUT)
            DDRD |= (1 << _pin);
        break;
    default:
        break;
    }
}

void digitalWrite(uint8_t _port, uint8_t _pin, uint8_t _state)
{
    switch (_port)
    {
    case 0:
        if (_state == 1)
            PORTA |= (1 << _pin);
        else if (_state == 0)
            PORTA &= ~(1 << _pin);
        break;
    case 1:
        if (_state == 1)
            PORTB |= (1 << _pin);
        else if (_state == 0)
            PORTB &= ~(1 << _pin);
    case 2:
        if (_state == 1)
            PORTC |= (1 << _pin);
        else if (_state == 0)
            PORTC &= ~(1 << _pin);
        break;
    case 3:
        if (_state == 1)
            PORTD |= (1 << _pin);
        else if (_state == 0)
            PORTD &= ~(1 << _pin);
    default:
        break;
    }
}

bool digitalRead(uint8_t _port, uint8_t _pin)
{
    bool pin_state;

    switch (_port)
    {
    case 0:
        pin_state = PINA & (1 << _pin);
        break;
    case 1:
        pin_state = PINB & (1 << _pin);
        break;
    case 2:
        pin_state = PINC & (1 << _pin);

        break;
    case 3:
        pin_state = PIND & (1 << _pin);
        break;

    default:
        break;
    }
    return pin_state;
}