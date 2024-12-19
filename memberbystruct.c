#include<stdio.h>

struct demo
{
	int iNum1;
	char ch;
	float fNum;
};

struct demo assign(struct demo*);

int main()
{
	struct demo obj1 = {10,'a',1.2};
	struct demo obj2;
	struct demo obj3 = {0};

	obj2 = obj1;
	
	obj3 = assign(&obj1);

	printf("%d\n",obj1.iNum1);

	printf("%c\n",obj2.ch);

	printf("%f\n",obj3.fNum);

	return 0;
}
struct demo assign(struct demo* a)
{
	struct demo obj4;

	obj4.iNum1 = a ->iNum1;
	obj4.ch = a ->ch;
	obj4.fNum = a -> fNum;

	return obj4;
}
