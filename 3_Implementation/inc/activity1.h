#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED




#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define ButtonSensor  (PORTD0)   /**< Port for Button Sensor  */
#define TempSensor  (PORTD1)   /**< Port for Temperature Sensor   */


#include <util/delay.h>
#include <avr/io.h>


void port(void);


void TurnLED_ON();


void TurnLED_OFF();


int activity1_LED(void);



#endif // ACTIVITY1_H_INCLUDED
