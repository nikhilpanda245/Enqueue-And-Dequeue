#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX],front=-1,rear=-1;
void disp();
void enqueue(int data)
{
	if(rear==MAX-1)
		printf("\n Queue is Full!");
	else
	{
		rear=rear+1;
		queue[rear]=data;
		if(front==-1)
			front=0;
	}
	disp();
}
void dequeue()
{
	if(front==-1||front==rear+1)
		printf("\n Queue is Empty");
	else
	{
		queue[front]=0;
		front=front+1;
	}
	disp();
}
void disp()
{
	printf("\n \n The elements in the queue are:");
	int i;
	if(front==-1)
		printf("\n Queue is Empty");
	else
		for(i=front;i<=rear;i++)
			printf("%d, ",queue[i]);
}
int main()
{
	int data, d;
	printf("\n 1. Add Element \n 2. Delete Element");
	while(1)
	{
	printf("\n\n Select Option: ");
	scanf("%d",&d);
		switch(d)
		{
			case 1: printf("\n Enter Data to Add: ");
					scanf("%d",&data);
					enqueue(data);
					break;
			case 2: dequeue();
					break;
			default: printf("\n Invalid Choice!");
		}
	}
}

