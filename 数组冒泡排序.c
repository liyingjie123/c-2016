#include<stdio.h>

int main(void)
{
 	int i,n,temp,sum=0;
 	int score[10];
 	printf("请输入10个成绩\n");
 	for(n=0;n<10;n++)
 	{
 		scanf("%d",&score[n]);
	}
 	for(n=0;n<9;n++)//冒泡排序 
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
	printf("成绩从小到大排序为\n");
	for(n=0;n<10;n++)
	{
		printf("%d\n",score[n]);
		sum=sum+score[n];
	}
	printf("最大值为%d\n",score[9]); 
	printf("最小值为%d\n",score[0]);
	printf("平均分为%d",sum/10);
	
	return 0;
}
