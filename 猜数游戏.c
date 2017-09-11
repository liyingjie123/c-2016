#include<stdio.h>

//此程序是一个猜数游戏
 key()
{
	int password;
	printf("/*请输入邀请码:*/\n");
	scanf("%d",&password);
	
	return password;
 } 
 
 
int main()
{
	int b;
	int i;
	srand(time(0));
	i=rand()%100;
	int password,r=123;
	do
 	{
 		password=key();
 	}while(password!=r);
	
	do
	{
		printf("请输入您心中的数字:\n");
		scanf("%d",&b);
		
		if(b-i>=20)
		{
			printf("数字大太多了\n");
			
		}
		else if (b-i>=10)
		{
			printf("数字大了一些\n");
			
		}
		else if ((0<b-i)&&(b-i<10))
		{
			printf("加油，只大了一点点\n"); 
			
		}
		else if(b-i==0)
		{
			printf("真厉害，答对了！\n");
			
		}
		else if((0>b-i)&&(b-i>=-10))
		{
			printf("小了一点点\n");
			
		 }
		 else if(b-i<-20)
		{
			printf("小了太多\n");
			
		}
		else if(b-i<=-10)
		{
			printf("小了一些\n");
			
		}
				
	 } while(b-i!=0);
	 return 0;
}
