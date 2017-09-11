#include<stdio.h>

//非常重要！！！  后加减，变量暂时不改变，下一步改变；前加减直接改变 
int main()
{
	int i=3,y=4,z,a;
	
	/*z=i++ +y;
	printf("%d\n",z);*/
	
	a = ++i + ++i ; 
	printf("a = %d\n", a);//所以不要连用自加减 
	i=1;
	printf("i++之后i++的值:%d\n",i++);
	printf("i++之后i的值:%d\n",i);
	
	i=1;
	printf("++i之后的++i值:%d\n",++i);
	printf("++i之后的i值:%d\n",i);
	
	/*int x;
    scanf("%d", &x);
    
    if ( x--< 5)//如若x=4，则此时x--仍是4 
	 {
		 
        printf("%d\n", x);//现在x为3 
    }
    else//若x=5，则x--为5，所以else，然而现在x自减后变成4 
    {
		
        printf("%d\n",x++);//还是4 
    	printf("%d\n", x);//4自加后变成5 
	} */
	
	return 0;
}
