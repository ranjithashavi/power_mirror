#include<avr/io.h>
#include<util/delay.h>
int main()
{    
    DDRB |=(1<<PB2);
  	DDRB |=(1<<PB5);
    DDRC |=(1<<PC5);
  	DDRD |=(1<<PD7);
  	PORTB&=~(1<<PB5);
    PORTD&=~(1<<PD7);
  	PORTC&=~(1<<PC5);
  	PORTB&=~(1<<PB2);
    DDRC&=~(1<<PC3);
  	DDRC&=~(1<<PC4);
  	DDRC&=~(1<<PC2);
  	DDRC&=~(1<<PC1);
  	DDRB|=(1<<PB3);
  	PORTB|=(1<<PB3);
while(1)
{
  if(PINC&(1<<PC1)) //  mirror up
  {
    PORTC|=(1<<PC5);
    PORTD&=~(1<<PD7);
    PORTB&=~(1<<PB2);
    PORTB &=~(1<<PB5);
  }
  else if(PINC&(1<<PC2)) // mirror down
  {
    PORTD|=(1<<PD7);
    PORTC&=~(1<<PC5);
    PORTB&=~(1<<PB2);
    PORTB &=~(1<<PB5);
  }
  else if(PINC&(1<<PC3)) // mirror right
  {
    PORTB|=(1<<PB5);
    PORTB&=~(1<<PB2);
    PORTC&=~(1<<PC5);
    PORTD&=~(1<<PD7);
    
  }
  else if(PINC&(1<<PC4)) // mirror left
  {
    PORTB|=(1<<PB2);
    PORTB&=~(1<<PB5);
    PORTC&=~(1<<PC5);
    PORTD&=~(1<<PD7);
    
  }
     else
     {
        PORTB&=~(1<<PB2);
        PORTB&=~(1<<PB5);
    	PORTC&=~(1<<PC5);
    	PORTD&=~(1<<PD7);
     }
  } 
return 0;
}
