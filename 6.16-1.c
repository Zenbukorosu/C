#include <stdio.h>
int main(void)
{
    char list[26];

    for (int i = 0; i < 26; i++)
    {
        list[i] = 'a' + i;
        printf("%c ", list[i]);
    };

    return 0;
}