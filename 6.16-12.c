#include <stdio.h>
int main(void)
{
    int plus, minus, turn;
    do
    {
        double sump = 0;
        double summ = 0;

        printf("Enter the turms you want to calculate:\n");
        scanf("%d", &turn);
        for (int i = 1; i <= turn; i++)
        {
            sump = sump + 1 / i;
        };
        for (int j = 1; j <= turn; j++)
        {
            summ = (summ + 1 / j) * (-1);
            summ = -summ;
        };
        printf("Add them up, you will get: %.3f\n", sump + summ);
    } while (turn > 0);
    printf("Done\n");

    return 0;
}