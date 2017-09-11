#include<stdio.h>
int main(void)
{
	float r,circuit,area;
	char b;
	const float pi=3.14159;
	b='y';
	while(b=='y')//！！！等号是‘==’！！！ 
	/*while语句前必须先有一遍循环体内的内容，这是第一遍执行。然后再循环
	因为while,for是先判断条件再执行程序 */ 
	{
		printf("请输入半径r");
		scanf("%f",&r);
		fflush(stdin);//也可以用get();或再写一个scanf(),相当于读取enter键，然后再读取y/n 
		if(r<=0)
		{
			printf("继续计算吗？y/n\n");
			scanf("%c",&b);
		}
		else
		{
			area=pi*r*r;
			circuit=2*pi*r;
			printf("面积:.2%f 周长:.2%f\n",area,circuit);
			printf("继续计算吗？y/n\n");
			scanf("%c",&b);
		}
	}
	/*所以这个例子可以用do{}while;(先执行一遍后执行程序)
	do
	{
		printf("请输入半径r");
		scanf("%f",&r);
		fflush(stdin);//也可以用get();或再写一个scanf(),相当于读取enter键，然后再读取y/n 
		if(r<=0)
		{
			printf("继续计算吗？y/n\n");
			scanf("%c",&b);
		}
		else
		{
			area=pi*r*r;
			circuit=2*pi*r;
			printf("面积:.2%f 周长:.2%f\n",area,circuit);
			printf("继续计算吗？y/n\n");
			scanf("%c",&b);
		}
	}while(b=='y);就能省去前面b='y'语句*/
	return 0;
 } 
