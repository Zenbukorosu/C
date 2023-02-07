#include <stdio.h>
int main(void)
{
    char list[6];
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            list[j] = 'F' - j;
            printf("%c", list[j]);
        };
        printf("\n");
    };

    return 0;
}