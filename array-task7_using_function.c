#include<stdio.h>

void assign(int[],int[],int);

int main()
{
  int arr1[50];
  int arr2[50];
  int count;
  int i;

  printf("How many elements you want to enter\t");
  scanf_s("%d",&count);

  printf("Enter elements");
  for(i = 0;i < count;i++)
  {
   scanf_s("%d",&arr1[i]);
  }
  for(i = 0;i < count;i++)
  {
	printf("arr1 is %d\n",arr1[i]);
  }

  assign(arr1,arr2,count);

  for(i = 0;i < count;i++)
  {
   printf("arr2 is %d\n",arr2[i]);
  }

   return 0;
}

void assign(int arr1[],int arr2[],int count)
{
	int i;
	for(i = 0;i < count; i++)
	{
	  arr2[i] = arr1[i];
	}
}