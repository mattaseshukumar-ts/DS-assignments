/***********************Bubble sort*************************/

#include<stdio.h>
#define SIZE 5

void bubble_sort(int *arr);

int main()
{
	int arr[SIZE], i =0;
	printf("Enter the %d elements of array:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	bubble_sort(arr);
	printf("\nArray elements after sorting:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	return 0;
}

void bubble_sort(int *arr)
{
	int i = 0,j = 0,flag = 0,temp = 0;
	for(i=0;i<SIZE-1;i++)
	{
		flag = 0;
		for(j=0;j<SIZE-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
}
