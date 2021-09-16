/**
 * @file activity1.c
 * @author Purvitha S K (you@domain.com)
 * @brief Defining pins and ports checking for LED ON/OFF
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "activity1.h"


void port(void)
{
    DDRD  |= (1<<PD2);
    PORTD |= (1<<PD0); //set bit PD0 for SeatSwitch
    DDRD &= ~(1<<PD1);
    PORTD |= (1<<PD1); //set bit PD0 for HeaterSwitch
}

void TurnLED_ON(){
    LED_PORT |= (1<<LED_PIN);
}

void TurnLED_OFF(){
    LED_PORT &= ~(1<<LED_PIN);
}

int LED1=0;
int activity1_LED(void)
{
       port();
        if(!(PIND&(1<<ButtonSensor )) && !(PIND&(1<<TempSensor)))
        {
            LED1=1;
        }
        else
        {
            LED1=0;
        }
return LED1;
}
