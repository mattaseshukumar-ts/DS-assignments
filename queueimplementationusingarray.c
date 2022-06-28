#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int front = -1;
int rear = -1;
int queue[SIZE];

void enque();
void deque();
void print();

int main()
{
	int option;
	while(1)
	{
		printf("Enter the option:\n");
		printf("1.enque\n2.deque\n3.print\n4.exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1: enque();
				break;
			case 2: deque();
				break;
			case 3: print();
				break;
			case 4: exit(0);
				break;
		}
	}
	return 0;
}

void enque()
{
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	if(rear == SIZE -1)
	{
		printf("Queue is full\n");
	}
	else
	{
		if(front == -1)
		{
			front++;
		}
		queue[++rear] = data;
	}
}

void deque()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Deleleted element is %d\n",queue[front]);
		++front;
		if(front > rear)
		{
			front = rear = -1;
		}
	}
}

void print()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(int i=front; i<=rear; i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}

