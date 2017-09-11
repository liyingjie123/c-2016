# include<stdio.h>

int func(int a,int b);
void main()
{
	int k=4,m=1,p;
	p=func(k,m);
	printf("%d\n",p);
	printf("%d\n",k);
	printf("%d\n",m);
	p=func(k,m);
	printf("%d",p);
 } 
 
 int func(int a,int b)
 {
 	static int m=0,i=2;//static保持最新值 
 	i+=m+1;
 	printf("%d\n",i);
 	m=i+a+b;
 	printf("%d\n",m);
 	return m;
 }
