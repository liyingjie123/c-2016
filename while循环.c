#include<stdio.h>
int main(void)
{
	float r,circuit,area;
	char b;
	const float pi=3.14159;
	b='y';
	while(b=='y')//�������Ⱥ��ǡ�==�������� 
	/*while���ǰ��������һ��ѭ�����ڵ����ݣ����ǵ�һ��ִ�С�Ȼ����ѭ��
	��Ϊwhile,for�����ж�������ִ�г��� */ 
	{
		printf("������뾶r");
		scanf("%f",&r);
		fflush(stdin);//Ҳ������get();����дһ��scanf(),�൱�ڶ�ȡenter����Ȼ���ٶ�ȡy/n 
		if(r<=0)
		{
			printf("����������y/n\n");
			scanf("%c",&b);
		}
		else
		{
			area=pi*r*r;
			circuit=2*pi*r;
			printf("���:.2%f �ܳ�:.2%f\n",area,circuit);
			printf("����������y/n\n");
			scanf("%c",&b);
		}
	}
	/*����������ӿ�����do{}while;(��ִ��һ���ִ�г���)
	do
	{
		printf("������뾶r");
		scanf("%f",&r);
		fflush(stdin);//Ҳ������get();����дһ��scanf(),�൱�ڶ�ȡenter����Ȼ���ٶ�ȡy/n 
		if(r<=0)
		{
			printf("����������y/n\n");
			scanf("%c",&b);
		}
		else
		{
			area=pi*r*r;
			circuit=2*pi*r;
			printf("���:.2%f �ܳ�:.2%f\n",area,circuit);
			printf("����������y/n\n");
			scanf("%c",&b);
		}
	}while(b=='y);����ʡȥǰ��b='y'���*/
	return 0;
 } 
