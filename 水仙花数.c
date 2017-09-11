#include<stdio.h>

int main(void)
{
	int num1,num2,num3,b,c,min,i;
	printf("请输入三个大于1的整数，并用空格隔开");
	scanf("%d %d %d",&num1,&num2,&num3);
	/*if(num1<num2) 
		min=a;
	else
		min=b;
	if(min>c)
		min=c;*/
	min=(num1<num2?num1:num2);
	min=(min<num3?min:num3);
	i=min;
	for(i=min;i>0;i--)
	{
		if((num1%i==0)&&(num2%i==0)&&(num3%i==0))
		{
			c=i;
			printf("%d",c);
			break;
		 } 
		 
		 
	}
	
	return 0;
}
