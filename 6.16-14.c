#include <stdio.h>
#define N 8
int main(void)
{
    double num1[N], num2[N];
    float x;

    for (int i = 0; i < N; i++)
    {
        printf("Enter a number:\n");
        scanf("%f", &x);
        num1[i] = x;
    };
    num2[0] = num1[0];
    for (int j = 0; j < N; j++)
    {
        num2[j + 1] = num2[j] + num1[j + 1];
    };
    num1[0] = num2[0];
    for (int k = 0; k < N; k++)
    {
        printf("%10.2f", num1[k]);
    };
    printf("\n");
    for (int l = 0; l < N; l++)
    {
        printf("%10.2f", num2[l]);
    };

    return 0;
}