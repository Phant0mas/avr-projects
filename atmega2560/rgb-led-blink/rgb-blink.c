/*
 * rgb led blink
 *
 * Copyright (C) 2014 Manolis Ragkousis
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 */

#include <atmega2560/declarations.h>
#include <avr/io.h>
#include <util/delay.h>

int
main (void)
{
  int current_color;
  
  DDRB |= _BV(DDB0) + _BV(DDB1) + _BV(DDB2); /* BLUE + RED + GREEN*/
    
  while(1) 
    {
      /* 2^3 color combinations */
      for(current_color = 0; current_color < 8; current_color++)
        {
          PORTB = current_color;
          _delay_ms(1000);
        }
      current_color = 0;
    }
}
