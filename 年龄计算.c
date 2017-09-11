#include<stdio.h>

int firecrackers(int n)
{
	int zcra[100],lcra[100],gcra[100],i,count,l,g,z;
	count=3*n;
	lcra[0]=1;
	gcra[0]=1;
	zcra[0]=1;
	for(i=1;i<n;i++)
	{
		lcra[i]=lcra[i-1]+1;
		gcra[i]=gcra[i-1]+2;
		zcra[i]=zcra[i-1]+3;
	}
	for(l=0;l<=n-1;l++)
	{
		for(g=0;g<=n-1;g++)
		{
			if(lcra[l]==gcra[g])
			{
				count=count-1;
			}
		}					
	}
	for(l=0;l<=n-1;l++)
	{
		for(z=0;z<=n-1;z++)
		{
			if(lcra[l]==zcra[z])
			{
				count=count-1;
			}
		}
	}
	for(g=0;g<=n;g++)
	{
		for(z=0;z<=n;z++)
		{
			if(gcra[g]==zcra[z])
				count--;
		}
	}
	printf("共听见%d声,用了%d秒",count+1,zcra[n-1]);
}

int main(void)
{
	int n;
	printf("请输入共有几根鞭炮");
	scanf("%d",&n);
	firecrackers(n); 
}
