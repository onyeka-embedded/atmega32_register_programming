#include <avr/io.h>
#include <util/delay.h>
#include "setup.h"

uint8_t pin_state;
int main(void)
{
    pinMode(PD, 6, OUTPUT);
    pinMode(PC, 0, INPUT);

    while (1)
    {
         /*
        digitalWrite(PD, 6, HIGH);
        _delay_ms(500);
        digitalWrite(PD, 6, LOW);
        _delay_ms(500);
            */
        pin_state = digitalRead(PC, 0);
        if (!pin_state) digitalWrite(PD, 6, HIGH);
        else{digitalWrite(PD, 6, LOW);}
    
    }
}
