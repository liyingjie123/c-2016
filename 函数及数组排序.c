#include<stdio.h>

/*int f(void){}  �������κβ���
int y()  ����Ҫ����*/
/*int fun(int n)
{
	int anser;
	for(anser=n;n>1;n--)
	{
		anser=anser*(n-1);
	}
	return anser;
} 

int main(void)
{
	printf("6�Ľ׳���%d\n",fun(6));
	return 0;
}*/

/*int swap1(int a,int b)
{
	int temp=a;
	a=b 
	b=temp;
}

int swap2(int * a,int * b)//����һ��ָ�� 
{
	int temp=*a;//���ݵ�ַѰ������ 
	*a=*b; 
	*b=temp;
}//a,b֪����ַ��������ֱ�Ӹ���num1,num2�е����� 

int main(void)
{
	int num1=3,num2=4;
	swap1(num1,num2);
	printf("num1=%d num2=%d\n",num1,num2);
	swap2(&num1,&num2);//����ַ��ֵ��a,b
	printf("num1=%d num2=%d\n",num1,num2);//��Ȼ���� 3 4����Ϊֻ�ǵ���num1,num2����ֵ��ֵ��a,b����a,b������û�аѽ�����ظ�num1,num2; 
	return 0;
}*/
void getarr(int * p,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		scanf("%d",p+i);
	}
}
void sortarr(int * p,int len)
{
	int i,j,temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-1-i;j++)
		{
			if(p[i]>p[i+1])
			{
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
}
void printarr(int *p,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d",p+i);
	}
}
int main(void)
{
	int len;
	int arr[len];
	printf("���������鳤��len:");
	scanf("%d",&len);
	getarr(arr,len);
	sortarr(arr,len);
	printarr(arr,len);
	
	return 0;
}
