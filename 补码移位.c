#include <stdio.h>

int main()
{
	char word;
	int a,b,i,sum;
	sum=0;
	printf("������һ���ַ�:\n");
	scanf("%c",&word);
	//sizeof()����������ռ�ֽ����� 
	for(i=8;i>=0;i--)
	{
		b=(word>>i)%2;
		if(b==1)
			sum=sum+1;
	}
	printf("\n��������ַ��Ķ������а���%d��'1'",sum);

	return 0;
}
