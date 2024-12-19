	 //To find given number is prime or not prime, input and no output form in function.


#include<stdio.h>
//Function declaration
//**************************
void prime(int);
//**************************

int main()
{
	int iNo;

	printf("Enter the Number\t");
	scanf_s("%d",&iNo);

	//Function call
	//****************************
	prime(iNo);		
	//****************************

	return 0;
}
//Fuction defination
//***********************************
void prime(int iNo)					
{
	int count;
	
	for(count = 2;count < iNo;count++)
	{
		if(iNo % count == 0)
			break;
	}

	if(count == iNo)
		printf("Number is prime\n");
	else
		printf("Number is not prime\n");
}
//************************************