#include<stdio.h>
int main(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));//%zd��ʾһ��size_ֵ(sizeof���ص�����)
	printf("Type int has a size of %zd bytes.\n", sizeof(char));//sizeof�����ֽ�Ϊ��λ����ָ�����͵Ĵ�С
	printf("Type int has a size of %zd bytes.\n", sizeof(long));
	printf("Type int has a size of %zd bytes.\n", sizeof(long long));
	printf("Type int has a size of %zd bytes.\n", sizeof(double));
	printf("Type int has a size of %zd bytes.\n", sizeof(long double));
	return 0;
}