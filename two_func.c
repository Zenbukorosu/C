#include<stdio.h>
void butler(void);//����ԭ��
int main(void)//�κ�C�����ȴ�main����ִ��
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable DVDs.\n");
	return 0;
}
void butler(void)//voidû�з���ֵ����������//�������壬���������Դ����
{
	printf("You rang.sir?\n");
}