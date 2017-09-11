#include<stdio.h>
#include<string.h>

struct point{
	int x;
	int y;
};
struct circle
{
	struct point o;
	int r;
};
double getArea(struct circle s)
{
	double area;
	area=3.14*s.r*s.r;
	return area;
}
double getPeri(struct circle s)
{
	double peri;
	peri=3.14*2*s.r;
	return peri;
}
int main(void)
{
	struct circle s1,s2;
	printf("请输入第一个圆的圆心位置");
	scanf("%d",&s1.o.x);
	scanf("%d",&s1.o.y);
	printf("请输入第一个圆的半径");
	scanf("%d",&s1.r);
	printf("%f\n",getArea(s1));
	printf("%f\n",getPeri(s1));
	printf("请输入第二个圆的圆心位置");
	scanf("%d",&s2.o.x);
	scanf("%d",&s2.o.y);
	printf("请输入第二个圆的半径");
	scanf("%d",&s2.r);
	printf("%f\n",getArea(s2));
	printf("%f",getPeri(s2));
	return 0;
}
