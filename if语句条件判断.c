#include<stdio.h>
int main(void)
{
	int a,b,c,d,j,i;
	scanf("%d",&a);
/*	b=((a/100)*(a/100)*(a/100));
	printf("%d\n",b);
	c=((a%100)/10)*((a%100)/10)*((a%100)/10);
	printf("%d\n",c);
	d=(a%10)*(a%10)*(a%10);
	printf("%d\n",d);
	if(a==(b+c+d))
	{
		printf("��ˮ�ɻ���");
	}
	else if(a!=(b+c+d))
	{
		printf("bushi\n");
	}*/
	if(a%2) //=(a%2==1)   //if����жϵ���"�٣�0��"��"�棨��0��"
	{
		printf("%d\n",a);
	}
	/*j=1;
	for(i=1;i<=a;i++)
	{
		j=j*i;
		printf("%d\n",j);
	}*/
}
