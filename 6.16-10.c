#include <stdio.h>
int main(void)
{
    int min, max;
    int sum = 0;

    printf("Enter lower and upper integer limits:\n");
    scanf("%d %d", &min, &max);
    while (min < max)
    {
        for (int i = min; i < max; i++)
        {
            sum = sum + i * i;
        };
        printf("The sums of the squares from %d to %d is 255\n", min * min, max * max);
        printf("Enter thr next set of limits:\n");
        scanf("%d %d", &min, &max);
    };
    printf("Done\n");

    return 0;
}