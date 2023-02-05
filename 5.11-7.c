#include <stdio.h>
void cube(float n);
int main(void)
{
    float num;

    printf("Enter a number:\n");
    scanf("%f", &num);
    cube(num);

    return 0;
}

void cube(float n)
{
    float m;
    m = n * n * n;
    printf("%.4f", m);
}