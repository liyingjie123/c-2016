#include <stdio.h> 
/*int num = 0; 
int fun(void) 
{ 
	int a=1,b; 
	printf("������һ����������"); 
scanf("%d", &num);
 b=a+num;
printf("�Ӻ�����num��ֵ��%d\n", num);
return b; }
 
void main(void) 
{ printf("%d\n",fun()); 
printf("��������num��ֵ��%d\n", num); }*/

/*int main(void) { enum Days{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday}; 
enum Days theDay; 
int j = 0; printf("��������������ڼ���(0 to 6)\n"); scanf("%d",&j); 
theDay = (enum Days)(j); 
printf("%",theDay);
if(Sunday == theDay || Saturday == theDay) { printf("It is the weekend.\n"); } 
else { printf("It is a working day.\n"); } 
return 0; }*/

/*struct node
{
	int data;
	struct node*next;
};

int main(void)
{
	struct node d1,d2,d3;
	struct node*head,*p;
	d1.data=11;d2.data=22;d3.data=33;
	
	head=&d1;d1.next=&d2;d2.next=&d3;d3.next=NULL;
	
	for(p=head;p!=NULL;p=p->next)
	{
		printf("%d\n",p->data);
	}
	return 0;
}*/
/*int main(void)
{
	int i=256;
	int b;
	printf("%p\n",(int*)i);
	printf("%p\n",&(((int*)i)[2]));
	b=(int)((&((int*)i)[2])-((int*)i));
	printf("����ָ��֮����ָ��%d\n",b);
	i=(int)&(((int*)i)[2]);
	
	printf("����Int��ָ��ռ4���ֽ�%d",i);//char*ָ��ռ1���ֽ� 
}*/

/*#define  A  "This is the first macro" 
void  f1(void) { printf( A"\n" ); } 
#define  B  "This is the second macro" 
void  f2(void) { printf( B ) ; } 
#undef  B 
int main(void) { f1( );printf( A"\n" );
 f2( ); //printf( B ) ;���δ���壨���������� 
 return 0; } */
 
 
