#include<stdio.h>
#include<string.h>

int main(void)
{
	/*char s1[100]="wu";
	char s2[]="yanzu";//�ַ�������Ϊ6��/0�� 
	strcat(s1,s2);
	printf("%s",s1); */
	
	
	/*����ֵ(����)������һ����ַ�������ݡ�Ҳ���Լ��ĵ�ַ��
	�ַ������ݣ������޸ģ�������ֻ��������������ڴ����������ݵĵ�ַ�������޸ģ�*/ 
	/*char *p0="abc";
	char *p1="abc";//����ֵ 
	char c1[4]="abc";//�ַ���
	char c2[4]="abc";
	
	const char *const p2=c1;//*p2�ǳ�����ָ��ĵ�ַ�޷��ٸı䣩
	const char *p3=c1;//*p3���ǳ�����ָ�����ָ���ĵ�ַ����ͨ��ָ�����ı��ַ�еĵ�ַ��
	char *p4=c1; 
	printf("%p\n","abc");
	printf("%p\n",p0);
	printf("%p\n",p1);
	
	printf("%p\n",c1);
	printf("%p\n",c2);*/
	
	
	char arr[8]="wuyanzu";
	char (*p)[8]=&arr;//����ָ�룬ָ�������ָ�롣char *p[8]��ָ�����飬Ԫ����ָ������� 
	
	/*printf("%s\n",arr);
	arr[1]='r';
	printf("%s",arr);*/
	
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",*p);//�������Ԫ�ص�ַ
	printf("%s\n",*p); 
	printf("%p\n",*p+1);
	printf("%s\n",*p+1);//�ڶ���Ԫ�صĵ�ַ֮��Ĵ��� 
	printf("%s\n",*(p+1));//����ƶ����������� 
	printf("%c\n",**p);//�������Ԫ�� 
}
