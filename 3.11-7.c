#include<stdio.h>
int main(void)
{
	double height;
	printf("Enter your height(inch): ");
	scanf("%lf", &height);
	printf("Your height is %g cm.\n", height * 2.54);//%g���ݸ������Ĵ�С����%e��%f
	return 0;
}