#include<stdio.h>

int main(void)
{
	char arr1[]="abcdefghijklmnopqrstuvwxyz1234567890";
	char arr2[]="0987654321abcdefghijklmnopqrstuvwxyz";
	char arr3[100],arr4[100];
	char *p=arr3;
	char *q=arr4;
	int i,m,n,len;
	
    printf("����������Ԫ�صĸ�����\n");
    scanf("%d",&len);//scanf�Ὣenter¼�����ռλ�����������gets 
    printf("��������Ҫ���ܵ��ļ�");
	getchar(); //��Ϊgets������ǰ���enter������ֹ�ˣ�����ǰ�����getchar 
	gets(arr3);
	printf("�����ļ��ǣ�"); 
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
