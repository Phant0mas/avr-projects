/*
 * led blink
 *
 * Copyright (C) 2014 Manolis Ragkousis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int
main (void)
{
  DDRB |= _BV(DDB0); 
    
  while(1) 
    {
      PORTB ^= _BV(PB0);
      _delay_ms(1000);
    }
}
