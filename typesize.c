#include<stdio.h>
int main(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));//%zd表示一个size_值(sizeof返回的类型)
	printf("Type int has a size of %zd bytes.\n", sizeof(char));//sizeof：以字节为单位给出指定类型的大小
	printf("Type int has a size of %zd bytes.\n", sizeof(long));
	printf("Type int has a size of %zd bytes.\n", sizeof(long long));
	printf("Type int has a size of %zd bytes.\n", sizeof(double));
	printf("Type int has a size of %zd bytes.\n", sizeof(long double));
	return 0;
}