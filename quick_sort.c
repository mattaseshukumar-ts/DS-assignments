/*****************************Quick sort*************************/

#include <stdio.h>
#define SIZE 5

int partition(int a[],int lb,int ub);
void quick_sort_recursion(int a[],int lb,int ub);
void quick_sort(int a[]);
void swap(int *x,int *y);

int main()
{
	int a[SIZE], i =0;
	printf("Enter %d elements of array:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a);
	printf("The sorted array:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

	return 0;
}

int partition(int a[],int lb,int ub)
{
	int pivot,start,end;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&a[start],&a[end]);
		}
	}
	swap(&a[lb],&a[end]);
	return end;
}



void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}


void quick_sort(int a[])
{
	quick_sort_recursion(a,0,SIZE-1);
}


void quick_sort_recursion(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partition(a,lb,ub);
		quick_sort_recursion(a,lb,loc-1);
		quick_sort_recursion(a,loc+1,ub);

	}
}

