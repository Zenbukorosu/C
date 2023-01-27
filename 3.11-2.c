#include<stdio.h>
int main(void)
{
	int ch;
	printf("Please enter an ASCII value:");
	scanf("%d", &ch);
	printf("ASCII code %d is %c.\n", ch, ch);
	return 0;
}