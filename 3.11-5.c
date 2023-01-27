#include<stdio.h>
int main(void)
{
	int year;
	long second;
	printf("Enter your age:\n");
	scanf("%d", &year);
	second = year * 31536000;
	printf("%d years old includes %ld seconds.", year,second);
	return 0;
}