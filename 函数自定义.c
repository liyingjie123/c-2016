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
	printf("��������ε����Ͻǵ�x����");
	scanf("%d",&(r.p1.x));
	printf("��������ε����Ͻǵ�y����");
	scanf("%d",&(r.p1.y));
	printf("��������ε����½ǵ�x����");
	scanf("%d",&(r.p2.x));
	printf("��������ε����½ǵ�y����");
	scanf("%d",&(r.p2.y));
	printf("���ε������%d",area(r));
	printf("���ε��ܳ���%d",per(r));
}
