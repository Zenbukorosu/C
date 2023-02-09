#include <stdio.h>
#define Dumbar_number 150
int main(void)
{
    int week = 1;
    int people = 5;
    do
    {
        people -= week;
        people *= 2;
        printf("On %d week, Mr.Rabnud have %d friends.\n", week, people);
        week++;
    } while (people < Dumbar_number);
    printf("After %d weeks, Mr.Rabnud will have %d friends.", week, people);

    return 0;
}