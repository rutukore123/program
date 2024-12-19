#include<stdio.h>

int addition(int ,int);
int subtraction(int ,int);
int multiplication(int ,int);
int division(int ,int);
int modulus(int ,int);

int main()
{
	int a;
	int b;
	int c;
	int choice;

	do
	{
	printf(" 1.addition\n 2.Subtraction\n 3.multiplication\n 4.Division\n 5.modulus\n 6.exit\n\n");

	printf("Enter a choice\t");
	scanf_s("%d",&choice);

	if(choice >= 1 && choice <= 5)
	{
	 printf("Enter two numbers\t");
     scanf_s("%d\t%d",&a,&b);
	}

	switch(choice)
	{
		
	case 1:
		
		c = addition(a,b);
		printf("Addition is %d\n\n",c);
		break;

	case 2:
		
		c = subtraction(a,b);
		printf("subtraction is %d\n\n",c);
	    break;

	case 3:
		
		c = multiplication(a,b);
		printf("multiplication is %d\n\n",c);
		break;

	case 4:
		
		c = division(a,b);
		printf("division is %d\n\n",c);
		break;

	case 5:
		c = modulus(a,b);
		printf("modulus is %d\n\n",c);
		break;

	case 6:
		printf("Exit\n");
		break;

	default:
		printf("Invalid choice\n\n");
		choice++;
	}
	if(choice == 6)
	break;

	}while(choice != 0);
	
  return 0;
}

int addition(int a,int b)
{
	 return  a + b;

}
int subtraction(int a,int b)
{
	return  a - b;

}
int multiplication(int a,int b)
{
	return  a * b;
}
int division(int a,int b)
{
	return  a / b;
}
int modulus(int a,int b)
{
	return  a % b;
}



