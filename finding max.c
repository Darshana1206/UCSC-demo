#include<stdio.h>

int main()
{
	int n,arr[20];
	int i;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("print the array:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	//Find the max number of array
	int max;
	max=arr[0];
	for(i=0;i<n;i++)
	{
		
		if(arr[i]>=max)
		{
			max=arr[i];
		}
		
		
	}
	printf("\nThe maximum number of array is= %d",max);
	
}
