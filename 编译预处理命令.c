#include<stdio.h>

#define debug 0
#define ceshi 1
#define zhuangtai 0
main()
{
	#if (zhuangtai==debug)
	    printf("���������\n");
	#elif (zhuangtai==tiaoshi)
		printf("������");
	#else 
		printf("...");
	#endif
	
}
