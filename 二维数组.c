#include<stdio.h>

int main(void)
{
	int a[6][2];
	int i,n,ave1,ave2,sum2=0,sum1;
	for(i=0;i<6;i++)
	{
		printf("�������%d��ѧ����Ŀ�ĳɼ�\n",i+1);
		sum1=0;
		for(n=0;n<2;n++)
		{
			
			scanf("%d",&a[i][n]);
		}
	}
	for(i=0;i<6;i++)
	{
			printf("��ͬѧ�����ųɼ�Ϊ%d\t%d\n",a[i][0],a[i][1]);	
	}
	for(i=0;i<6;i++)
	{
		sum1=0;
		for(n=0;n<2;n++)
		{
			sum1=a[i][n]+sum1;
			ave1=sum1/2;
		}printf("��ͬѧ��ƽ����Ϊ%d\n",ave1);
	}
	for(n=0;n<2;n++)
	{
		printf("�������%d����Ŀ�ĳɼ�",n+1);
		sum2=0;
		for(i=0;i<6;i++)
		{
			sum2=(sum2+a[i][n]);
			ave2=sum2/6;
		}printf("�˿�Ŀ��ƽ����Ϊ%d",ave2);
	}
	return 0;		
}
