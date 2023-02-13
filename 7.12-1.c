#include <stdio.h>
#define STOP '#'
int main(void)
{
    int ch;
    int letter = 0;
    int space = 0;
    int enter = 0;
    while ((ch = getchar()) != STOP)//getchar 函数需要()
    {
        (ch == ' ' ? ++space : (ch == '\n' ? ++enter : ++letter));
    }

    printf("Here are the contents\n");
    printf("Space: %d\n", space);
    printf("Linefeed: %d\n", enter);
    printf("Others: %d\n", letter);
    return 0;
}