#include <stdio.h>
#define min_per_hour 60
int main(void)
{
    int hour, min, left;
    printf("Enter the number of minutes:\n");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min / min_per_hour;
        left = min % min_per_hour;
        printf("%dhour%dmin\n", hour, left);
        printf("Enter next value:\n");
        scanf("%d", &min);
    }
    printf("Done!");
    return 0;
}