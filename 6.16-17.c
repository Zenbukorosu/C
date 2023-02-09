#include<stdio.h>
int main()
{
    int year=0;
    double money=100.00;
    do{
        money *= 1.05;
        money -= 8;
        year++;
    } while (money > 0);
    printf("After %d years, you will have no money.", year);

    return 0;
}