#include <stdio.h>

key()
{
	char password;
	printf("/*������������*/\n");
	fflush(stdin);//char����ʱ���ȡenter�������������ջ����� 
	scanf("%c",&password);
	
	return password;
}

int main(void)
{
	int a=150,b;
	char password,r='a';
	do
	{
		password=key();
	}while(password!=r);
	
	return 0;
}
