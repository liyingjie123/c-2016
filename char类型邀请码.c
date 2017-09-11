#include <stdio.h>

key()
{
	char password;
	printf("/*请输入邀请码*/\n");
	fflush(stdin);//char类型时会读取enter键，这条语句清空缓存区 
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
