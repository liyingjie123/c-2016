#include <stdio.h>

int main()
{
	int year,b,c;
	printf("��������Ҫ�жϵ����"); 
	scanf("%d",&year);
	b=year%100;
	if(b==0)
	{
		c=year%400;
		
		if(c==0)
		{
			printf("����һ������");
		}
		else 
		{
			printf("�ⲻ��һ������");
		}
	}
	else
	{
		c=year%4;
		if(c==0)
		{
			printf("����һ������");
		}
		else
		{
			printf("�ⲻ��һ������");
		}
	}
	
	
	return 0; 
}
