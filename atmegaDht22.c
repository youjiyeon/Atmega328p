//start signal

DDRC = 0x01;//output set

PORTC = 0x00;//Tbe 
_delay_ms(20);//20ms

PORTC = 0x01; //Tgo
_delay_us(40);//40us

DDRC = 0x00;//input set

_delay_us(160);//response time(Trel,Treh)

while ((PINC & 0x01) == 0) 
{ 
		  	 
 _delay_us(16); 
			
    if((PINC & 0x01) == 1)
    {
    data[j / 8] <<= 1; 
    data[j / 8] |= 1; 
    j++; 
    }

    else
    {
    data[j / 8] <<= 1; 
    j++; 
    }
        
}	
		  