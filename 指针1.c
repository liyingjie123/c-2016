/*  p��ָ������֣�ռ4�ֽڵ��ڴ棨�����Լ��ĵ�ַ����
	p=&a;��p�Ǵ��a�ĵ�ַ�������%p��*pΪa������
	int*, double*�ǲ�ͬ���͵�ָ�� */

//ָ�����������ָ��֮����ڼ���Ԫ�أ�������ռ���ֽڣ���int�Ͳ�2������char���Ͳ�8����short�Ͳ�4������ָ������һ�¡� 
//ָ��+��/��*û������ 
//�������� ��ַ���������������������ã�P����ʾp�Ƿ�==��
//&ȡ��ַ�������Ϊ��ֵ
//*Ѱַ����ȥ�����ĵ�ַ����ȡ�˵�ַ�������ݣ����Ϊ��ֵ�������޸ģ� 
 
#include <stdio.h>
int main(void)
{
/*	int a=10;
	int * p=&a;
	int **q=&p;// q=&p; *q=&a; **q=a;
	
	//��ȡa��ֵ 
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",&p);
	printf("%d\n",q);
	printf("%d\n",*q);
	printf("%d\n",&a);
	printf("%d\n",**q);
	//printf("%d\n",***q(����Ч�����Ͳ�����);
	
	//��ȡa�ĵ�ַ 
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%p\n",*q);
	
	//��ȡp�ĵ�ַ
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
	printf("%d\n",p);//arr��������/��Ԫ�صĵ�ַ��==&arr[0]
	printf("%d\n",p+1);
	printf("%p\n",p);//&arr�������ַ
	printf("%p\n",p+1); 
	for(i=0;i<5;i++)
		printf("%d",*(arr+i));//==arr[i]
	printf("\n");
	/*int arr[5]={11,22,33,44,55},a;
	a=(*(&arr+1)-2)[1];
	printf("%d",a);*/
	
/*	int x = 3;
	 int * p = &x; 
	printf("���ʽx ��ֵΪ: %d\n", x); 
	printf("���ʽ&x ��ֵΪ: %p\n", &x); 
	printf("���ʽp ��ֵΪ: %p\n", p); 
	printf("���ʽ&p ��ֵΪ: %p\n", &p);
	 printf("���ʽ*p ��ֵΪ: %d\n", *p); */
	 
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
 
