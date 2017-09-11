#include<stdio.h>

int main(void)
{
	// \0的ACSLL码是0
	//字符串数组一定要以“\0”结束
	/*char s5[6];    s5="china";是不对的（s5是一块地址)*/ 
	
	char s1[6]={'c','h','i','n','a','\0'};
	char s2;
	s2="nihao";
	printf("%s\n",s2);//错 
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
