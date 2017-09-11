#include<stdio.h>

int main(void)
{
	char arr1[]="abcdefghijklmnopqrstuvwxyz1234567890";
	char arr2[]="0987654321abcdefghijklmnopqrstuvwxyz";
	char arr3[100],arr4[100];
	char *p=arr3;
	char *q=arr4;
	int i,m,n,len;
	
    printf("请输入数组元素的个数：\n");
    scanf("%d",&len);//scanf会将enter录入造成占位，所以最好用gets 
    printf("请输入你要解密的文件");
	getchar(); //因为gets函数把前面的enter吸收终止了，所以前面需加getchar 
	gets(arr3);
	printf("您的文件是："); 
	for(i=0;i<len;i++)
	{
		for(m=0;m<37;m++)
		{
			if(arr3[i]==arr2[m])
			{
				arr4[i]=arr1[m];//pnourq 
				printf("%c",arr4[i]);
			}
			continue;
		}
	}
	
	return 0;
}
