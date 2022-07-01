/**********************************Selection sort***********************/

#include<stdio.h>
#define SIZE 5

void selection_sort(int *arr);

int main()
{
	int arr[SIZE],i = 0;
	printf("Enter the %d elements of array:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}

	selection_sort(arr);

	printf("Array after sorting:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	return 0;
}

void selection_sort(int *arr)
{
	int i = 0,j = 0,min = 0,temp = 0;

	for(i=0;i<SIZE;i++)
	{
		min = i;
		for(j=i+1;j<SIZE;j++)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		if(min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}
