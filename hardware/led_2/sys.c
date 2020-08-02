/*
*This file about system function define
*
*/

void delay_us(unsigned int t)
{
    while(--t);
}

void delay_ms(unsigned int t)
{
    unsigned char temp;
    while(t--){
        for(temp=0;temp<123;temp++){;}
    }
}

