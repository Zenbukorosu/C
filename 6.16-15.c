#include <stdio.h>
#define LEN 255
int main(void)
{
    int i = 0;
    char ch[LEN];
    printf("Enter a word:\n");
    while (scanf("%c", &ch[i]) && i <= LEN && ch[i] != '\n') //&&逻辑与；'\n'控制输出终止
        i++;

    for (i--; i >= 0; i--)
    {
        printf("%c", ch[i]);
    };

    return 0;
}
