#include<stdio.h>

int main()
{
	/*1. �ж�switch��� ������caseʱִ�������䣻
		case����û��break;������ִ�к���Ĵ���ֱ��break; 
		��û�з���������case����ִ��default;
		��default����⣬û���������û��break;�����ִ�к������䣻
		����switchһ��Ҫ����break��������default ��÷������*/ 
	int x=3,a=0,b=0;
	switch(x--)
	{
		case 0:b++;
		case 1:printf("%d",a++);
		default:b=b-2;
		case 2:printf("%d",a++),b++;
	}
	
	printf("a=%d,b=%d",a,b);
	 
	return 0;
}
