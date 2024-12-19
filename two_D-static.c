#include<stdio.h>

int main(void)
{
	int arr[100][100];
	int nRow;
	int nCol;
	int iCount1;
	int iCount2;

	printf("Enter how many rows you want:");
	scanf("%d",&nRow);

	printf("\nEnter how many columns you want:");
	scanf("%d",&nCol);

	printf("\nEnter rows and columns Elements:");
	for(iCount1 = 0; iCount1 < nRow; iCount1++)
	{
		for(iCount2 = 0; iCount2 < nCol; iCount2++) 
			scanf("%d\t",&arr[iCount1][iCount2]);
	}
	
	printf("\nElements of rows and columns:\n");
	for(iCount1 = 0; iCount1 < nRow; iCount1++)
	{
		for(iCount2 = 0; iCount2 < nCol; iCount2++) 
			printf("arr:[%d]\t",arr[iCount1][iCount2]);
		printf("\n");
	}
	

	return 0;
}