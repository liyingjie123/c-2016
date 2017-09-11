#include<stdio.h>

#include<stdio.h>
#include<stdlib.h>
void josephus(int*p , const int n , const int m){
    int alife=n;
    int i,a;                     
    int k=0;                
    int j=0;
    while(alife > m-1){
        if(*(p+j) == 0)
        {
            k+=1;
            if(k==m)
            {
                *(p+j)=1;
                k=0;
            }
            j+=1;
            if(j == n)
            {
                j=0;
            }
        }
        else
        {
            j+=1;
            if(j == n)
            {
                j=0;
            }
        }

        alife=n;           
        for(i=0; i<n; i++)    
        {
            if(*(p+i) == 1)
                alife-=1;
        }
    }
    printf("他和朋友的位置是:");
    for(a=0; a<n; a++)
    {
        if(*(p+a) == 0)
            printf("%d  ",a+1);
    }
    return 0;
}

int main(void)
{
    int * arr;
    int n,m;
    printf("请输入人的总数:");
    scanf("%d",&n);
    printf("请输入报数值:");
    scanf("%d",&m);
    arr = (int *)calloc(n, sizeof(int));
    josephus(arr, n, m);

    return 0;
}
 
