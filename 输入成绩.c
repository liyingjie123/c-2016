#include<stdio.h>

int main(void)
{
	int score,i=0,score1,arage;
	score1=0;

	scanf("%d",&score);
	while(score!=-1)
	{
		scanf("%d",&score);
		printf("%d",score);
		i=i+1;
	}
	printf("%d",i);
	score1=score1+score;
	arage=score1/i;
	printf("%d",arage);
	
}
