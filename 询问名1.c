#include <stdio.h>  
#include <string.h>

int main()
{
	char xing[234],ming[2];
	printf("请分别输入您的姓和名：\n"); 
	
	printf("姓：");
	gets(xing);
	printf("名：");
	gets(ming);
	
	printf("您的姓是：");
	puts(xing);
	printf("您的名是：");
	puts(ming);
	strcat(xing,ming);
	printf("您的全名是：%s",xing);
	
	
}

