#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define stop '|'
int main(void)
{
    char c;
    char pre;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter next to be analyzed(| to terminate):\n");
    pre = '\n';
    while ((c = getchar()) != stop)
    {
        n_chars++;
        if (c == '\n')
        {
            n_lines++;
        }
        if (!isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if ((isspace)(c) && inword)
        {
            inword = false;
        }
        pre = c;
    }
    if (pre != '\n')
        p_lines = 1;
    printf("Characters = %ld, words= %d,lines=%d,", n_chars, n_words, n_words, n_lines);
    printf("partial lines=%d\n", p_lines);

    return 0;
}