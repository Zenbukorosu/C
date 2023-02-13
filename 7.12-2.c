#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != STOP)
    {
        if (count++ % 8 == 0)
        {
            putchar('\n');
        }     
        else
        {
            printf("'%c'-%-5d", ch, ch);
        }
    }
    printf("done\n");

    return 0;
}