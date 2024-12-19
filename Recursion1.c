#include<stdio.h>

void fun1(int);

int main()
{
	
	int no;

	printf("Enter a number:");
	scanf_s("%d",&no);

	 fun1(no);
	
	return 0;
}
 void fun1(int no)		
{
	
	if(no >= 1)
		fun1(no - 1);
		
		printf("%d\n",no);	
}