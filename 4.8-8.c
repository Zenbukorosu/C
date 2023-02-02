#include <stdio.h>
#define gallon_to_litter 3.785
#define mile_to_kilometer 1.609
int main(void)
{
    float range;
    float oil;
    printf("Enter the range you have travelled.(mile):\n");
    scanf("%f", &range);
    printf("Enter the oil you have spend.(gallon):\n");
    scanf("%f", &oil);

    printf("Fuel consumption:%.f.1 miles per gallon\n", range / oil);
    printf("In US,your oil spend is %.f.1 miles per gallon.\n", range / oil);
    printf("In Europe,your oil spend is %.f.1 litters per kilometer.", gallon_to_litter * oil * 100 / range / mile_to_kilometer);

    return 0;
}
