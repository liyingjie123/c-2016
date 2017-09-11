#include<stdio.h>

int main()
{
	/*1. 判断switch语句 当符合case时执行其后语句；
		case后若没有break;则依行执行后面的代码直到break; 
		当没有符合条件的case，则执行default;
		若default如此题，没有在最后且没有break;则继续执行后面的语句；
		所以switch一定要配套break！！！！default 最好放在最后。*/ 
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
