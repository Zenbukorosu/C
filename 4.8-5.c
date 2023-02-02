#include <stdio.h>
int main(void)
{
    float speed, size;

    printf("Enter the net speed.(Mb/s)\n");
    scanf("%f", &speed);
    printf("Enter the size of the file(Mb).\n");
    scanf("%f", &size);
    printf("At %.2f megabits per second,", speed);
    printf("a file of %.2f megabytes\n", size);
    printf("donwnloads in %.2f seconds.", size * 8 / speed);

    return 0;
}