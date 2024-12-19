#include<stdio.h>

int main(void)
{
	int (**arr);
	int nRow;
	int nCol;
	int iCount1;
	int iCount2;

	printf("Enter Number how many Rows you want:");
	scanf("%d",&nRow);

	printf("\nEnter Number how many Columns you want:");
	scanf("%d",&nCol);

	arr =(int**)malloc(nRow * nCol * sizeof(int*));

	if(arr == NULL)
	{
		printf("Memory allocation failed");
	}
	else
	{
		printf("\nEnter elements:");
		for(iCount1 = 0; iCount1 < nRow; iCount1++)
		{
			for(iCount2 = 0; iCount2 < nCol; iCount2)
				scanf("arr[%d][%d]",&arr[iCount1][iCount2]);
		}
		printf("\nelements are:");
		for(iCount1 = 0; iCount1 < nRow; iCount1++)
		{
			for(iCount2 = 0; iCount2 < nCol; iCount2)
				printf("arr[%d][%d]",arr[iCount1][iCount2]);
		}

	}
	free(arr);

	return 0;
}

