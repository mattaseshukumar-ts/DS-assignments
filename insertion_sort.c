/********************Insertionm sort**************************/

#include<stdio.h>
#define SIZE 5

void insertion_sort(int *arr);

int main()
{
	int arr[SIZE],i = 0;
	printf("Enter the %d elements of array:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(arr+i));
	}
	insertion_sort(arr);

	printf("\nArray after sorting:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",*(arr+i));
	}
	printf("\n");
	return 0;
}

void insertion_sort(int *arr)
{
	int i = 0,j = 0,temp = 0;

	for(i=1;i<SIZE;i++)
	{
		temp = arr[i];
		j = i-1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
}
