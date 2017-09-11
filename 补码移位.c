#include <stdio.h>

int main()
{
	char word;
	int a,b,i,sum;
	sum=0;
	printf("请输入一个字符:\n");
	scanf("%c",&word);
	//sizeof()用来计算所占字节数； 
	for(i=8;i>=0;i--)
	{
		b=(word>>i)%2;
		if(b==1)
			sum=sum+1;
	}
	printf("\n您输入的字符的二进制中包含%d个'1'",sum);

	return 0;
}
