#include<stdio.h>

//�ǳ���Ҫ������  ��Ӽ���������ʱ���ı䣬��һ���ı䣻ǰ�Ӽ�ֱ�Ӹı� 
int main()
{
	int i=3,y=4,z,a;
	
	/*z=i++ +y;
	printf("%d\n",z);*/
	
	a = ++i + ++i ; 
	printf("a = %d\n", a);//���Բ�Ҫ�����ԼӼ� 
	i=1;
	printf("i++֮��i++��ֵ:%d\n",i++);
	printf("i++֮��i��ֵ:%d\n",i);
	
	i=1;
	printf("++i֮���++iֵ:%d\n",++i);
	printf("++i֮���iֵ:%d\n",i);
	
	/*int x;
    scanf("%d", &x);
    
    if ( x--< 5)//����x=4�����ʱx--����4 
	 {
		 
        printf("%d\n", x);//����xΪ3 
    }
    else//��x=5����x--Ϊ5������else��Ȼ������x�Լ�����4 
    {
		
        printf("%d\n",x++);//����4 
    	printf("%d\n", x);//4�ԼӺ���5 
	} */
	
	return 0;
}
