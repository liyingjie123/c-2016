#include<stdio.h>


int insertList(Node **pHead,int data,int index) 
{
	//�ж��±��Ƿ�Ϸ� 
	//�����ڵ㣬����ڵ�
	Node*newNode=NULL;
	Node*temp=*pHead;
	int i;
	int size=sizeList(*pHead);
	if(index<0||index>size)
	return 0;
	
	newNode=(Node*)malloc(sizeof(Node));
	newNode->data;
	newNode->=NULL;
	//ͷ�ڵ�֮ǰ 
	if(index==0)
	{
		newNode->next=*pHead;
		*pHead=newNode;
		return 1;
	}
	
	for(i=1;i<index;i++)
		temp=temp->next;
		
	newNode->next=temp->next;
	temp->next=newNode;
	return 1;	
}
