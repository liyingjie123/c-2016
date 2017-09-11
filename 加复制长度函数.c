#include<stdio.h>
#include<string.h>

/*int myStrlen(char*str)
{
	int i;
	for(i=0;i<100;i++)
	{
		if(str[i]=='\0')//for(i=0;str[i]!='\0';i++);return i; 
		return i+1;
	}
	
}*/

void myStrcpy(char*d,char const*s)
{
	int i,dlen;
	dlen=strlen(d);
	for(i=0;i<strlen(s);i++)
	{
		*(d+i+dlen)=*(s+i);
	}d[i+dlen]='\0';
}
int main(void)
{
	char d[100]="123";
	myStrcpy(d,"wuyanzu");
	puts(d);
	puts(strlen(d));
	
	return 0;
}
