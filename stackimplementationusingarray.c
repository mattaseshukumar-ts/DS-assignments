#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int top = -1;
int stack[SIZE];

void push();
void pop();
void print();

int main()
{
	int option;
	while(1)
	{
		printf("Enter the option:\n");
		printf("1.push\n2.pop\n3.print\n4.exit\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: print();
				break;
			case 4: exit(0);
				break;
		}
	}
	return 0;
}

void push()
{
	int data;
	printf("Enter the data:");
	scanf("%d",&data);
	if(top == SIZE -1)
	{
		printf("Stack is full\n");
	}
	else
	{
		if(top == -1)
		{
			stack[++top] = data;
		}
		else
		{
			stack[++top] = data;
		}
	}
}

void pop()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Deleleted element is %d\n",stack[top]);
		--top;
		if(top >= SIZE)
		{
			top = -1;
		}
	}
}

void print()
{
	if(top == -1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(int i=top; i>=0; i--)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

