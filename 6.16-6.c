#include <stdio.h>
int main(void)
{
    int min, max, turn;
    printf("Enter the min number:\n");
    scanf("%d", &min);
    printf("Enter the max number:\n");
    scanf("%d", &max);
    turn = max - min + 1;

    for (int i = 1; i <= turn; i++)
    {
        int two, thr;
        two = min * min;
        thr = two * min;
        printf("%5d %5d %5d\n", min++, two, thr);
    }

    return 0;
}