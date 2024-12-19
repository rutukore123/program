#include<stdio.h>

int main(void)
{
	int arr[3][2][2] = {0};
	int nRow;
	int nCol;
	int nPlane;
	int iCount1;
	int iCount2;
	int iCount3;

	printf("Enter number of plane:");
	scanf("%d",&nPlane);

	printf("Enter number of rows:");
	scanf("%d",&nRow);

	printf("\nEnter number of columns:");
	scanf("%d",&nCol);

	
	for(iCount1 = 0; iCount1 < nPlane; iCount1++)
	{
		for(iCount2 = 0; iCount2 < nRow; iCount2++)
		{
			for(iCount3 = 0; iCount3 < nCol; iCount3++)
			{
				printf("Enter arr[%d][%d][%d]",iCount1, iCount2, iCount3);
				scanf("%d",&arr[iCount1][iCount2][iCount3]);
			}
		}
	}
	for(iCount1 = 0; iCount1 < nPlane; iCount1++)
	{
		for(iCount2 = 0; iCount2 < nRow; iCount2++)
		{
			for(iCount3 = 0; iCount3 < nCol; iCount3++)
			{
				printf(" arr[%d][%d][%d] = %d\n",iCount1,iCount2,iCount3,arr[iCount1][iCount2][iCount3]);
				printf("\n");
			}
		}
	}

	return 0;
}