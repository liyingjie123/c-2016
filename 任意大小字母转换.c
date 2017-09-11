#include <stdio.h>

int main(void)
{
	char a,b,c;
	printf("请输入三个英文字母");
	scanf("%c%c%c",&a,&b,&c);
	if((a>=65&&a<=90)||(a>=97&&a<=122))
	{

		if(a<97)
		{
			printf("%c",a+32);
		}
		else
		{
			printf("%c",a-32);
		}
	}
	else
	{
		printf("非法");
	}
	
	if((b>=65&&b<=90)||(b>=97&&b<=122))
	{
		if(b<97)
		{
			printf("%c",b+32);
		}
		else
		{
			printf("%c",b-32);
		}
	}
	else
	{
		printf("非法");
	}
	
	if((c>=65&&c<=90)||(c>=97&&c<=122))
	{
		if(c<97)
		{
			printf("%c",c+32);
		}
		else
		{
			printf("%c",c-32);
		}
	}
	else
	{
		printf("非法");
	}
	
	return 0;
}
