#include<stdio.h> 

int main(void)
{
	int a[5][5]={},m,n;//�п���Ϊ�գ��в���Ϊ�� 
	int sum1=0,sum2=0,sum;
	printf("������25������\n"); 
	for(m=0;m<5;m++)
	{
		for(n=0;n<5;n++)
		{
			scanf("%d",&a[m][n]);
		}
	}
	for(n=0;n<5;n++)
	{
		sum1=sum1+a[0][n]+a[4][n];
	}
	for(m=1;m>0&&m<4;m++)
	{
		sum2=sum2+a[m][0]+a[m][4];
	}
	sum=sum1+sum2;
	printf("%d\n",sum);
}

