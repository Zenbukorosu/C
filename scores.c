#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)

{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index++)
    {
        printf("Enter No.%d score:\n", index + 1);
        scanf("%5d", &score[index]);
        printf("The score read in is as follow: %d\n", score[index]);
        sum += score[index];
    }

    average = sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That'a handicap of %.0f.\n", average - PAR);

    return 0;
}