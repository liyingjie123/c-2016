#include <stdio.h>
#include<math.h>

int main(viod)
{
	int a,b;
	float c;
	printf("��������Ҫ�Ƚϵ�������:");
	scanf("%d %d",&a,&b);
	c=((a+b)+abs(a-b))/2;
	printf("����������ֵΪ:%.2f",c);
	printf("��ƽ����Ϊ:%.2f",sqrt(c));
	
	return 0;
}
