#include<stdio.h>

struct demo
{
	int iNum;
	float fNum;
};

 int compare(struct demo,struct demo);	

int main()
{
	struct demo obj1,obj2;
	int ans;

	printf("Enter vlaue of obj1");
	scanf_s("%d %f",&obj1.iNum,&obj1.fNum);

	printf("Enter vlaue of obj2");
	scanf_s("%d %f",&obj2.iNum,&obj2.fNum);

	ans = compare(obj1,obj2);

	if(ans == 0)
	{
		printf("objects are equal\n");
	}
	else
		printf("objects are not equal\n");

	return 0; 
}
int compare(struct demo a,struct demo b)
{
	if(a.iNum == b.iNum && a.fNum == b.fNum)
	    return 0;
	else
	   return 1;
}