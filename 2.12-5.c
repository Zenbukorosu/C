#include<stdio.h>
void br(void);
void ic(void);
int main(void)//ע�⣬��λ��
{
	printf("Brazil,Russia,");
	ic();
	printf("India,China,\n");
	br();
	return 0;
}
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China\n");
}