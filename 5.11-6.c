#include <stdio.h>
int main(void)
{
    int count, sum, day, today;
    count = 0;
    sum = 0;
    printf("Enter the day you want to calulate:\n");
    scanf("%d", &day);

    while (count++ < day)
    {
        today = count * count;
        sum = sum + today;
    };
    printf("%d. that's all.", sum);

    return 0;
}