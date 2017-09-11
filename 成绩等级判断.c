#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d",&a);
	
	if(a<0||a>100)
	{
		printf("您输入的语句不合法"); 
		
		return 0;
	}  
	if(a>=80)              //不能用80<=a<=100，因为运算符有逻辑顺序，先算80<=a得出“1”， 
	{
		printf("优等");   //然后计算“1<=100”。所以，无论输入什么数都是“优等”。 
	}
	else if(a>=60)       // 关系运算符（&&、||、)级别比逻辑运算符高 
	{
		printf("良");    //表达式语句末尾加“；”，关系语句（if）不加 
	}
	else
	{
		printf("差");
	}
	
	return 0; 
}
