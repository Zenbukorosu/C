#include <stdio.h>
int main()
{
    int x = 0;
    double a, b;
    a = b = 100;

    do
    {
        a += 10;
        b *= 1.05;
        x++;
    } while (b < a);
    printf("%d", x);
    printf("Daphne has:%.2f\n", a);
    printf("Deirdre has:%.2f\n", b);

    return 0;
}