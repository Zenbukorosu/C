#include<stdio.h>
int main(void)
{
	double num;
	printf("Enter a floating-point value:\n");
	scanf("%lf", &num);
	printf("fixed-point notation:%f\n", num);
	printf("exponential notation:%e\n", num);
	printf("p notation:%a\n", num);//%a��ӡʮ������ָ���������ĸ�����
}