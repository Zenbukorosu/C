#include <stdio.h>
int main(void)
{
    char num[9];
    for (int i = 1; i <= 7; i++)
    {
        printf("Enter a number:\n");
        scanf("%d", &num[i]);
        printf("The number is %d, enter next one:\n", num[i]);
    };
    printf("Enter the last number:\n");
    scanf("%d", &num[8]);
    printf("the num is %d, then you will get:\n", num[8]);
    for (int j = 8; j >= 1; j--)
    {
        printf("%4d", num[j]);
    };

    return 0;
}