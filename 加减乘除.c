#include<stdio.h>

int main(void)
{
	int a,sum,ji,shang,cha;
	float b; 
	printf("请输入两个整数");
	scanf("%d %f",&a,&b);//取值时一定要注意类型一致 
	printf("你输入的两个数字为：%d %d",a,b);
	//sum=a+b;
	//cha=a-b;
	//ji=a*b;
	//shang=a/b;
	//yu=a%
	printf("两个数的和为：%d",a+b);
	printf("两个数的差为：%d",a-b);
	printf("两个数的积为：%.2f",b*a);// 
	/*除号的正负取舍和一般的算数一样，符号相同为正，相异为负
求余符号的正负取舍和被除数符号相同
-3/16=0     16/-3=-5     -3%16=-3      16%-3=1 
如果前面的数小于后面的数时，这样的商为0,余数就是a
*/ 
	printf("两个数的商为：%d",a/b);
	/*除法运算符“/”。二元运算符，具有左结合性。参与运算的量
	均为整型时，结果为整型，舍去小数。如果运算量中有一个为实型，
	结果为双精度实型。 */ 
	
	//printf("两个数取余得：%d",a%b);
	/*求余运算符“%”，二元运算符，具有左结合性。参与运算的量均为整型。
	求余运算的结果等于两个数相除后的余数。 变量必须为整型。*/ 
	
	return 0; 
}
