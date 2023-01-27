#include<stdio.h>
int main(void)
{
	double height;
	printf("Enter your height(inch): ");
	scanf("%lf", &height);
	printf("Your height is %g cm.\n", height * 2.54);//%g根据浮点数的大小采用%e或%f
	return 0;
}