#include <stdio.h>
#include <string.h>

int main(void)
{
    char lname[20];
    char fname[20];
    int x, y;

    printf("Enter your last name:");
    scanf("%19s", lname);
    printf("Please enter your first name: ");
    scanf("%19s", fname);
    x = strlen(lname);
    y = strlen(fname);
    printf("%s %s\n", lname, fname);
    printf("%*d %*d\n", x, x, y, y);
    printf("%s %s\n", lname, fname);
    printf("%-*d %-*d\n", x, x, y, y);

    return 0;
}
