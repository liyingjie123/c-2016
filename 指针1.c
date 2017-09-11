/*  p是指针的名字，占4字节的内存（具有自己的地址），
	p=&a;即p是存放a的地址，输出用%p；*p为a的内容
	int*, double*是不同类型的指针 */

//指针相减：两个指针之间存在几个元素（类型所占的字节，若int型差2个，则char类型差8个，short型差4个）【指针类型一致】 
//指针+，/，*没有意义 
//可以利用 地址随机产生随机数，可以利用！P来表示p是否==空
//&取地址符，结果为右值
//*寻址符，去变量的地址处获取此地址处的内容，结果为左值（可以修改） 
 
#include <stdio.h>
int main(void)
{
/*	int a=10;
	int * p=&a;
	int **q=&p;// q=&p; *q=&a; **q=a;
	
	//获取a的值 
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",&p);
	printf("%d\n",q);
	printf("%d\n",*q);
	printf("%d\n",&a);
	printf("%d\n",**q);
	//printf("%d\n",***q(是无效的类型参数）);
	
	//获取a的地址 
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%p\n",*q);
	
	//获取p的地址
	printf("%p\n",&p);
	printf("%p\n",*q);*/
	
	/*int arr[5]={1,2,3,4,5};
	int i;
	int *p=arr;
	int *q=&arr[3]; 
	
	printf("%p\n",arr);
	printf("%d\n",q-p);
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	printf("%d\n",p);//arr（数组名/首元素的地址）==&arr[0]
	printf("%d\n",p+1);
	printf("%p\n",p);//&arr是数组地址
	printf("%p\n",p+1); 
	for(i=0;i<5;i++)
		printf("%d",*(arr+i));//==arr[i]
	printf("\n");
	/*int arr[5]={11,22,33,44,55},a;
	a=(*(&arr+1)-2)[1];
	printf("%d",a);*/
	
/*	int x = 3;
	 int * p = &x; 
	printf("表达式x 的值为: %d\n", x); 
	printf("表达式&x 的值为: %p\n", &x); 
	printf("表达式p 的值为: %p\n", p); 
	printf("表达式&p 的值为: %p\n", &p);
	 printf("表达式*p 的值为: %d\n", *p); */
	 
	short a[5] = {1,2,3,4,5};
	short *p, *q; p = &a[0]; 
	q = p+2; p += 3; 
	//printf("%d\n", *p);
	printf("%d\n", *p++);//4
	//printf("%d\n", *p);
	scanf("%d", --q);
	if (p>q) printf("%d\n", p-q); 
	else printf("%d\n", q-p);

	return 0;
} 
 
