#include<stdio.h>

//�˳�����һ��������Ϸ
 key()
{
	int password;
	printf("/*������������:*/\n");
	scanf("%d",&password);
	
	return password;
 } 
 
 
int main()
{
	int b;
	int i;
	srand(time(0));
	i=rand()%100;
	int password,r=123;
	do
 	{
 		password=key();
 	}while(password!=r);
	
	do
	{
		printf("�����������е�����:\n");
		scanf("%d",&b);
		
		if(b-i>=20)
		{
			printf("���ִ�̫����\n");
			
		}
		else if (b-i>=10)
		{
			printf("���ִ���һЩ\n");
			
		}
		else if ((0<b-i)&&(b-i<10))
		{
			printf("���ͣ�ֻ����һ���\n"); 
			
		}
		else if(b-i==0)
		{
			printf("������������ˣ�\n");
			
		}
		else if((0>b-i)&&(b-i>=-10))
		{
			printf("С��һ���\n");
			
		 }
		 else if(b-i<-20)
		{
			printf("С��̫��\n");
			
		}
		else if(b-i<=-10)
		{
			printf("С��һЩ\n");
			
		}
				
	 } while(b-i!=0);
	 return 0;
}
