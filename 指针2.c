#include<stdio.h>

int main(void)
{
	// \0��ACSLL����0
	//�ַ�������һ��Ҫ�ԡ�\0������
	/*char s5[6];    s5="china";�ǲ��Եģ�s5��һ���ַ)*/ 
	
	char s1[6]={'c','h','i','n','a','\0'};
	char s2;
	s2="nihao";
	printf("%s\n",s2);//�� 
	printf("%p\n",s1);
	printf("%s\n",s1);
	printf("%p","china"); 
	
	/*char * ps="We change lives"; 
	int n=10; 
	printf("%p",ps);
	ps=ps+n; 
	printf("%s\n",ps);
	printf("%p",ps);*/

}
