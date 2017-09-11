#include <stdio.h>

int main()
{
	int year,b,c;
	printf("请输入您要判断的年份"); 
	scanf("%d",&year);
	b=year%100;
	if(b==0)
	{
		c=year%400;
		
		if(c==0)
		{
			printf("这是一个闰年");
		}
		else 
		{
			printf("这不是一个闰年");
		}
	}
	else
	{
		c=year%4;
		if(c==0)
		{
			printf("这是一个闰年");
		}
		else
		{
			printf("这不是一个闰年");
		}
	}
	
	
	return 0; 
}
