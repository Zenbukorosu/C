#include <stdio.h>
#define day_per_week 7
int main(void)
{
    int day, left, week;

    printf("Enter the number of days:\n");
    scanf("%d", &day);
    week = day / day_per_week;
    left = day % day_per_week;
    printf("%d days are %d weeks, %d days.", day, week, left);

    return 0;
}