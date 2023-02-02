#include<stdio.h>
int main(void)
{
    char firstname[40];
    char lastname[40];
    printf("Enter your firstname%s.\n",firstname);
    scanf("%s", firstname);
    printf("Enter your lastname%s.\n", lastname);
    scanf("%s", lastname);
    printf("%s,%s", lastname, firstname);
    return 0;
}