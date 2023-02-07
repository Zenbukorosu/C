#include <stdio.h>
#include <string.h>
#define length 20
int main(void)
{
    char str[length];

    printf("Enter a word:\n");
    scanf("%19s", str);
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    };

    return 0;
}