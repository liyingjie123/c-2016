#include<stdio.h>

int main(void)
{
	int k=10;

	while(k)//��k==1 
	{
		k = k- 1;
		printf("%d",k);
	}
	/* 3.   ����������ֻȡ�������һλ�� 
	int x=3,y;
	y=((x+3,4,5),6);
	printf("%d",y);*/
	/* 4. int w,c,y;
	float money;
	printf("���������������������g��\n");
	scanf("%d",&w);
	printf("������1��2��1Ϊ�鼮��2Ϊˮ����\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(w<1000)
			{
				if(w%200==0)
				{
					money=(w/200)*4.5;
					printf("����֧��%.2fԪ",money);
				}
				else if(w%200!=0)
				{
					money=(w/200+1)*4.5;
					printf("����֧��%.2fԪ",money);
				}
			}
			else if(w>1000)
			{
				y=w-1000;
				if(y%200==0)
				{
					money=(y/200)*6+22.5;
					printf("����֧��%.2fԪ",money);
				}
				else if(y%200!=0)
				{
					money=(y/200+1)*6+22.5;
					printf("����֧��%.2fԪ",money);
				}
			}break;
		case 2:
			if(w<1000)
			{
				if(w%200==0)
				{
					money=(w/200)*7;
					printf("����֧��%.2fԪ",money);
				}
				else if(w%200!=0)
				{
					money=(w/200+1)*7;
					printf("����֧��%.2fԪ",money);
				}
			}
			else if(w>1000)
			{
				y=w-1000;
				if(y%200==0)
				{
					money=(y/200)*8.5+35;
					printf("����֧��%.2fԪ",money);
				}
				else if(y%200!=0)
				{
					money=(y/200+1)*8.5+35;
					printf("����֧��%.2fԪ",money);
				}
			}break;
	}*/
	return 0;
}
