#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    printf("Enter your name %s\n", name);
    scanf("%s", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"", strlen(name) + 3, name); //%*s配合strlen()控制字符长度
    return 0;
}