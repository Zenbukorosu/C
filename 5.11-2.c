#include <stdio.h>
int main(void)
{
    int a = 5;

    printf("%d\n", a);
    while (a++ < 15)
    {
        printf("%d\n", a);
    };
    printf("Done!");

    return 0;
}