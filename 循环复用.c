#include<stdio.h>
int main(void)
{
	int a,b,c,min,max,result,r1,r2,r3;
	r1=1;
	r2=1;
	r3=1;
	printf("�������������������ÿո����\n");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b?a:b);
	(c>max?max=c:max);
	//printf("%d",max);
	result=max;
	//������������С������ 
/*	for(result=max;(!(r1==0&&r2==0&&r3==0));result=result+1)
	{
		r1=result%a;
		r2=result%b;
		r3=result%c;
		printf("%d\n",result);	
	}
	printf("%d",result);��һ��r1�����ϣ�����ִ��һ��ȫ�ף�����+1*/
	//�ĳ������ 
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
