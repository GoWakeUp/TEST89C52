#include <8052.h>

#define uint unsigned int

#define LED1 P1_0

void delay_ms(unsigned int ms)
{
    unsigned int i, j;
    for(i = 0; i < ms; i++)
    {
        for(j = 0; j < 1200; j++) // 假设1ms大约需要1200次循环
            ;
    }
}

void main()
{
    while(1) {
        LED1 = 0;
        delay_ms(100);
        LED1 = 1;
        delay_ms(100);
    }
}