#include<stdio.h>
int main(void)
{
	double pint,cup,ounce,bigspoon,teaspoon;
	printf("Enter the quantity of cups.:");
	scanf("%lf",& cup);
	pint = cup /2;
	ounce = cup * 8;
	bigspoon = ounce * 2;
	teaspoon = bigspoon *3;
	printf("There are four ways to show %g cups.\n",cup);
	printf("pint:%g\n", pint);
	printf("ounce:%g\n", ounce);
	printf("bigspoon:%g\n", bigspoon);
	printf("teaspoon:%g\n", teaspoon);
	return 0;
}