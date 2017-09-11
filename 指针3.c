#include<stdio.h>
#include<string.h>

int main(void)
{
	/*char s1[100]="wu";
	char s2[]="yanzu";//字符串长度为6（/0） 
	strcat(s1,s2);
	printf("%s",s1); */
	
	
	/*字面值(内容)本质是一个地址即“内容”也是自己的地址，
	字符串内容（不可修改）保存在只读区，所分配的内存里面是内容的地址（可以修改）*/ 
	/*char *p0="abc";
	char *p1="abc";//字面值 
	char c1[4]="abc";//字符串
	char c2[4]="abc";
	
	const char *const p2=c1;//*p2是常量（指向的地址无法再改变）
	const char *p3=c1;//*p3不是常量（指针可以指向别的地址但是通过指针来改变地址中的地址）
	char *p4=c1; 
	printf("%p\n","abc");
	printf("%p\n",p0);
	printf("%p\n",p1);
	
	printf("%p\n",c1);
	printf("%p\n",c2);*/
	
	
	char arr[8]="wuyanzu";
	char (*p)[8]=&arr;//数组指针，指向数组的指针。char *p[8]是指针数组，元素是指针的数组 
	
	/*printf("%s\n",arr);
	arr[1]='r';
	printf("%s",arr);*/
	
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",*p);//数组的首元素地址
	printf("%s\n",*p); 
	printf("%p\n",*p+1);
	printf("%s\n",*p+1);//第二个元素的地址之后的串儿 
	printf("%s\n",*(p+1));//向后移动了整个数组 
	printf("%c\n",**p);//数组的首元素 
}
