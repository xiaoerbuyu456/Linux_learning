void uart0_init()
{
    /*config pin and GPH2 3 in uart0 RX TX*/
    GPHCON &= ~((3<<4) | (3<<6));

    GPHCON |= ((2<<4 | (2<<6)));

    GPHUP &= ~((1<<2) | (1<<3));
    /*set bount rate
    *UBRDIVn = (int)(UART clock/ (buad rate x 16)) -1
    * UART clock: PCLK, FCLK/n or UEXTCLK
    */
    UCON0 = 0x00000005;
    UBRDIV0 = 26;

    ULCON0 = 0x00000003;

    /*set data formate*/
}

int putchar(int c)
{
    /*UTRSTAT0*/
    /*UTXH0*/
    while(!(UTRSTAT0 & (1<<2)));
    UTXH0 = (unsigned char) c;
}

int getchar(void)
{
    while(!(UTRSTAT0 & (1<<0)));
    return URXH0;
}

int puts(const char *s)
{
    while(*s)
    {
        putchar(*s);
        s++;
    }
}

