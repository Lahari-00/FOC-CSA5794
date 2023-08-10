#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("a is %d",a);
	printf("b is %d",b);
	return 0;
}
