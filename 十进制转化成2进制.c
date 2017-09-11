#include <stdio.h>

int twitcht(int x)
{
	int b,i,sum;
	sum=0;
	for(i=32;i>=0;i--)
	{
		if(x>=0)
		{
			b=(x>>i)%2;
		}
		else b=-((x>>i)%2);
		sum+=1;
		if(sum==5)
		{
			printf("\t");
			sum=0;
		}
		printf("%d",b);
	}
}
int main()
{
	int x;
	printf("请输入一个数字:\n");
	scanf("%d",&x);
	twitcht(x);
	return 0;
}
