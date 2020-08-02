#include "sc2440_soc.h"
#include "sys.h"

int test_led()
{
    /*config GPF*/
    GPFCON = 0X1500;
    /*write data to control led on/off */
    GPFDAT = 0;  //turn on led
    int time = 10000;
    delay_ms(1000);
    GPFDAT = 0xFF;   //turn off led
    delay_ms(1000);
    GPFDAT = 0xDF;
    delay_ms(5000);
 
	
    return 0;
}



