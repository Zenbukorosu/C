#include<stdio.h>
void butler(void);//函数原型
int main(void)//任何C程序都先从main（）执行
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	return 0;
}
void butler(void)//void没有返回值，不带参数//函数定义，函数本身的源代码
{
	printf("You rang.sir?\n");
}