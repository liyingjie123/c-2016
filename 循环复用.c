#include<stdio.h>
int main(void)
{
	int a,b,c,min,max,result,r1,r2,r3;
	r1=1;
	r2=1;
	r3=1;
	printf("请输入三个整数，并用空格隔开\n");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b?a:b);
	(c>max?max=c:max);
	//printf("%d",max);
	result=max;
	//求三个数的最小公倍数 
/*	for(result=max;(!(r1==0&&r2==0&&r3==0));result=result+1)
	{
		r1=result%a;
		r2=result%b;
		r3=result%c;
		printf("%d\n",result);	
	}
	printf("%d",result);第一遍r1不符合，所以执行一遍全套，包括+1*/
	//改成下面的 
	/*for(result=max;;result=result+1) 
	{
		r1=result%a;
		r2=result%b;
		r3=result%c;
		if(r1==0&&r2==0&&r3==0)
		{
			printf("%d\n",result);
			break;
		}
	}*/
	while(1)
	{
		r1=result%a;
		r2=result%b;
		r3=result%c;
		if(r1==0&&r2==0&&r3==0)
		{
			printf("%d\n",result);
			break;
		}
		else
			result++;
	}
	return 0;
}
