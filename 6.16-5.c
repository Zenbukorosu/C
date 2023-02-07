#include <stdio.h>
int main(void)
{
    char ch;
    printf("Please enter a upper letter: ");
    scanf("%c", &ch);
    int LEVEL = ch - 'A' + 1;
    printf("The pyramid of %d levels is:\n", LEVEL);
    
    for (int i = 1; i <= LEVEL; i++)
    {
        char ch1 = 'A';
        char ch2 = 'A' + i - 2;
        for (int j = 1; j <= LEVEL - i; j++)
        {
            printf(" ");
        };
        for (int k = 1; k <= i; k++)
        {
            printf("%c", ch1++);
        };
        for (int l = 1; l < i; l++)
        {
            printf("%c", ch2--);
        };
        printf("\n");
    };

    return 0;
}