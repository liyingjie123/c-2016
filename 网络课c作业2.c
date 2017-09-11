#include <stdio.h>
#include<math.h>

int main(viod)
{
	int a,b;
	float c;
	printf("请输入您要比较的两个数:");
	scanf("%d %d",&a,&b);
	c=((a+b)+abs(a-b))/2;
	printf("你输入的最大值为:%.2f",c);
	printf("其平方根为:%.2f",sqrt(c));
	
	return 0;
}
