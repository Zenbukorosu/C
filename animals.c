#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give an animal name \n");
    printf("begin with that letter.\n");
    printf("Please a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("argail\n");
                break;
            case 'b':
                printf("babirusa\n");
                break;
            case 'c':
                printf("coati\n");
                break;
            }
        else
            printf("I recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please enter another letter or a #.\n");
    }
    printf("bye");

    return 0;
}