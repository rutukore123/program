#include<stdio.h>

int compare(int[],int[],int);

int main()
{
	int arr1[50];
	int arr2[50];
	int i;
	int count;
	int ans;

	printf("How many elements you want to enter\t");
  scanf_s("%d",&count);

  printf("Enter arr1 elements");
  for(i = 0;i < count;i++)
  {
   scanf_s("%d",&arr1[i]);
  }
 printf("Enter arr2 elements");
   for(i = 0;i < count;i++)
  {
   scanf_s("%d",&arr2[i]);
  }

  ans = compare(arr1,arr2,count); 

  if(ans == 0)
  {
   printf("arr1 and arr2 are equal\n");
  }
  else
  {
   printf("arr1 and arr2 are not equal\n");
  }
  
}
int compare(int arr1[],int arr2[],int count)
{
	int i;

    for(i = 0;i < count;i++)
    {
       if(arr1[i] == arr2[i])
	      return 0;
	}
	return i;
}