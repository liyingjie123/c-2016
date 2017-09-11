#include<stdio.h>

#define debug 0
#define ceshi 1
#define zhuangtai 0
main()
{
	#if (zhuangtai==debug)
	    printf("程序调试中\n");
	#elif (zhuangtai==tiaoshi)
		printf("测试中");
	#else 
		printf("...");
	#endif
	
}
