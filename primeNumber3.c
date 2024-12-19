	 //To find given number is prime or not prime, input and no output form in function.


#include<stdio.h>
//Function declaration
//**************************
int prime(int);
//**************************

int main()
{
	int iNo;
	int iRet;
	int count;

	printf("Enter the Number\t");
	scanf_s("%d",&iNo);

	//Function call
	//****************************
	iRet = prime(iNo);		
	//****************************

	if(prime(iNo) == 0)
		printf("Number is prime\n");
	else
		printf("Number is not prime\n");

	return 0;
}
//Fuction defination
//***********************************
int prime(int iNo)					
{
	int count;

	for(count = 2;count < iNo; count++)
	{
		if(iNo % count==0)
			return 1;
	}
	 
	return 0;
}
//************************************