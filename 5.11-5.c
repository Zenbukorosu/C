#include <stdio.h>
int main(void)
{
    int count, sum, day;
    count = 0;
    sum = 0;
    printf("Enter the day you want to calulate:\n");
    scanf("%d", &day);

    while (count++ < day)
    {
        sum = sum + count;
    };
    printf("%d. that's all.", sum);

    return 0;
}