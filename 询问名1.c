#include <stdio.h>  
#include <string.h>

int main()
{
	char xing[234],ming[2];
	printf("��ֱ����������պ�����\n"); 
	
	printf("�գ�");
	gets(xing);
	printf("����");
	gets(ming);
	
	printf("�������ǣ�");
	puts(xing);
	printf("�������ǣ�");
	puts(ming);
	strcat(xing,ming);
	printf("����ȫ���ǣ�%s",xing);
	
	
}

