#include<stdio.h>

typedef struct point
{
	int x; int y;
}Point;
typedef struct ract
{
	struct point p1;
	struct point p2;
}Ract;
int area(Ract r)
{
	int s,h,w;
	w=r.p2.x-r.p1.x;
	h=r.p1.y-r.p2.y;
	s=w*h;
	return s;
}
int per(Ract r)
{
	int c,h,w;
	w=r.p2.x-r.p1.x;
	h=r.p1.y-r.p2.y;
	c=(w+h)*2;
	return c;
}
int main(void)
{
	Ract r;
	printf("请输入矩形的左上角的x坐标");
	scanf("%d",&(r.p1.x));
	printf("请输入矩形的左上角的y坐标");
	scanf("%d",&(r.p1.y));
	printf("请输入矩形的右下角的x坐标");
	scanf("%d",&(r.p2.x));
	printf("请输入矩形的右下角的y坐标");
	scanf("%d",&(r.p2.y));
	printf("矩形的面积是%d",area(r));
	printf("矩形的周长是%d",per(r));
}
