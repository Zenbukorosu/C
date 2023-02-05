#include <stdio.h>
void temperature(double f_t);
int main(void)
{
    double temp;

    printf("Enter the temperature(temp):\n");
    while (scanf("%lf", &temp) == 1)
    {
        temperature(temp);
        printf("Enter next value(q to quit):\n");
    };
    printf("done\n");

    return 0;
}

void temperature(double f_t)
{
    const double f_val = 32.0;
    const double k_val = 273.16;
    double t = 5.0 / 9.0 * (f_t - f_val);
    printf("Centigrade temperature: %.2lf\n", t);
    printf("Fahrenheit temperature: %.2lf\n", f_t);
    printf("Kelvin temperature: %.2lf\n", t + k_val);
}