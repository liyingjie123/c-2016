
//矩阵转置 
#include<stdio.h>
int main(void)
{
	int arr[2][3],i,n,b[3][2],a[3][2];
	for(i=0;i<2;i++)
	{
		printf("输入数第%d行\n",i+1); 
		for(n=0; n<3; n++)
		{
			scanf("%d", &arr[i][n]);
			a[n][i]=arr[i][n];
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(n=0; n<2; n++)
		{
			printf("%4d",a[i][n]);
		}
		printf("\n");
	}
}



/*00 01 02
10 11 12

00 10
01 11
02 12*/

