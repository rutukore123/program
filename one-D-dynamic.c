#include<stdio.h>


int main(void)
{
	int *arr;
	int size;
	int iCount;

	printf("Enter how you want size in array: \n");
	scanf("%d",&size);

	arr = (int*)malloc(size * sizeof(int));

	if(arr == NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
		printf("Enter elements:");
		for(iCount = 0; iCount < size; iCount++)
		{
			scanf("%d",&arr[iCount]);
		}
		printf("elements are:");
		for(iCount = 0; iCount < size; iCount++)
		{
			printf("%d\t",arr[iCount]);
		}
	}
	free(arr);
	return 0;
}
