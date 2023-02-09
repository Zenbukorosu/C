#include <stdio.h>
int main(void)
{
    int num[8];
    int n = 2;
    int i = 0;
    int j = 0;

    for (; i < 8; i++, n *= 2)
    {
        num[i] = n;
    };
    do
    {
        printf("%4d", num[j]);
        j++;
    } while (j < 8);

    printf("\nDone");

    return 0;
}