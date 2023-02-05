#include <stdio.h>
int main(void)
{
    int first, second, left;

    printf("This program computes moduli.\n");
    printf("Enter a integer to serve as the second operand:\n");
    scanf("%d", &second);
    printf("Enter a integer to serve as the first operand:\n");
    scanf("%d", &first);
    while (first > 0)
    {
        left = first % second;
        printf("%d %% %d is %d\n", first, second, left); //%%是特殊的转义字符
        printf("Enter the next number to serve as the first operand(<=0 quit):\n");
        scanf("%d", &first);
    };
    printf("Done");

    return 0;
}