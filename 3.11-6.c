#include<stdio.h>
int main(void)
{
	double water;
	printf("Enter the weight of water:.\n");
	scanf("%lf", &water);
	printf("%lf quart water includes %e Water molecules ", water, water * 950 / 3.0e-23);
	return 0;
}