#include<stdio.h>
#define MAX 100

int main(void)
{
	int arr[MAX];
	int Num;
	int iCount;

	printf("Enter how many elements you want:");
	scanf("%d",&Num);

	printf("Enter elements:");
	for(iCount = 0; iCount < Num; iCount++)
	{
		scanf("%d",&arr[iCount]);
	}
	printf("elements of array is:");
	for(iCount = 0; iCount < Num; iCount++)
	{
		printf("%d\t",arr[iCount]);
	}

	return 0;
}