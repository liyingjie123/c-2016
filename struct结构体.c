#include<stdio.h>
#include<string.h>

struct student{
	char name[30];
	int age;
	int C;
};
struct student getStudent(){
	struct student s;
	scanf("%s",s.name);
	scanf("%c",&s.age);
	scanf("%d",&s.C);
	return s;
};
void printStudent(struct student s){
	printf("%s:%d,%d",s.name,s.age,s.C);
}
int main(void){
	struct student s1,s2;
	s1=getStudent();
	s2=getStudent();
	printStudent(s1);
	printStudent(s2);
	return 0;
}
