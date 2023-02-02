#include <stdio.h>
int main(void)
{
    float height;
    char name[40];

    printf("Enter your name.\n", name);
    scanf("%s", name);
    printf("Enter your height.(cm)\n", height);
    scanf("%f", &height);
    printf("%s,you are %.3f meters tall.", name, height / 100);

    return 0;
}