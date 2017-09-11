#include<stdio.h>

int main(void)
{
	int k=10;

	while(k)//即k==1 
	{
		k = k- 1;
		printf("%d",k);
	}
	/* 3.   “，”运算只取括号最后一位数 
	int x=3,y;
	y=((x+3,4,5),6);
	printf("%d",y);*/
	/* 4. int w,c,y;
	float money;
	printf("请输入您所购买的重量（g）\n");
	scanf("%d",&w);
	printf("请输入1或2（1为书籍，2为水果）\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(w<1000)
			{
				if(w%200==0)
				{
					money=(w/200)*4.5;
					printf("您需支付%.2f元",money);
				}
				else if(w%200!=0)
				{
					money=(w/200+1)*4.5;
					printf("您需支付%.2f元",money);
				}
			}
			else if(w>1000)
			{
				y=w-1000;
				if(y%200==0)
				{
					money=(y/200)*6+22.5;
					printf("您需支付%.2f元",money);
				}
				else if(y%200!=0)
				{
					money=(y/200+1)*6+22.5;
					printf("您需支付%.2f元",money);
				}
			}break;
		case 2:
			if(w<1000)
			{
				if(w%200==0)
				{
					money=(w/200)*7;
					printf("您需支付%.2f元",money);
				}
				else if(w%200!=0)
				{
					money=(w/200+1)*7;
					printf("您需支付%.2f元",money);
				}
			}
			else if(w>1000)
			{
				y=w-1000;
				if(y%200==0)
				{
					money=(y/200)*8.5+35;
					printf("您需支付%.2f元",money);
				}
				else if(y%200!=0)
				{
					money=(y/200+1)*8.5+35;
					printf("您需支付%.2f元",money);
				}
			}break;
	}*/
	return 0;
}
