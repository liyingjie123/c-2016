#include<stdio.h>

int main(void)
{
 	int i,n,temp,sum=0;
 	int score[10];
 	printf("������10���ɼ�\n");
 	for(n=0;n<10;n++)
 	{
 		scanf("%d",&score[n]);
	}
 	for(n=0;n<9;n++)//ð������ 
 	{
 		for(i=0;i<9-n;i++)	
 		{
 			if(score[i]>score[i+1])	
 			{
 				temp=score[i];
 				score[i]=score[i+1];
 				score[i+1]=temp;
			}
		}
	}
	printf("�ɼ���С��������Ϊ\n");
	for(n=0;n<10;n++)
	{
		printf("%d\n",score[n]);
		sum=sum+score[n];
	}
	printf("���ֵΪ%d\n",score[9]); 
	printf("��СֵΪ%d\n",score[0]);
	printf("ƽ����Ϊ%d",sum/10);
	
	return 0;
}
