int main()
{
    unsigned char c;
    uart0_init();
    puts("Hello world!\n\r");
    while(1){
        c =getchar();
        putchar(c);
    }
    return 0;
} 
