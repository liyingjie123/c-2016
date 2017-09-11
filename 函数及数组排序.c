#include<stdio.h>

/*int f(void){}  不接受任何参数
int y()  不需要参数*/
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
	printf("6的阶乘是%d\n",fun(6));
	return 0;
}*/

/*int swap1(int a,int b)
{
	int temp=a;
	a=b 
	b=temp;
}

int swap2(int * a,int * b)//定义一个指针 
{
	int temp=*a;//根据地址寻到内容 
	*a=*b; 
	*b=temp;
}//a,b知道地址，所以是直接更改num1,num2中的内容 

int main(void)
{
	int num1=3,num2=4;
	swap1(num1,num2);
	printf("num1=%d num2=%d\n",num1,num2);
	swap2(&num1,&num2);//将地址赋值给a,b
	printf("num1=%d num2=%d\n",num1,num2);//依然返回 3 4，因为只是单向将num1,num2的数值赋值给a,b，而a,b交换后并没有把结果返回给num1,num2; 
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
	printf("请输入数组长度len:");
	scanf("%d",&len);
	getarr(arr,len);
	sortarr(arr,len);
	printarr(arr,len);
	
	return 0;
}
