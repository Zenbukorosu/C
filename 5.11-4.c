#include <stdio.h>
#define centimeter_per_inch 2.54
#define inch_per_feet 12
int main(void)
{
    float cent, inch, inchl;
    int feet;

    printf("Enter a height in centimeters:\n");
    scanf("%f", &cent);
    while (cent > 0)
    {
        feet = cent / inch_per_feet / centimeter_per_inch;
        inch = cent / centimeter_per_inch;
        inchl = inch - (feet * inch_per_feet);
        printf("%.1f cm = %d feets, %.1f inches\n", cent, feet, inchl);
        printf("Enter a height in centimeters(<=0 to quit):\n");
        scanf("%f", &cent);
    };
    printf("bye");

    return 0;
}