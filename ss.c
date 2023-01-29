#include <stdio.h>
void smi(void);
int main()
{
    smi();
    smi();
    printf("Smile!\n");
    smi();
    printf("Smile!\n");
    smi();
    return 0;
}
void smi(void)
{
    printf("Smile!");
}