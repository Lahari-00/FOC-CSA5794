#include<stdio.h>
int main()
{
	int age,x;
	printf("enter the age: ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("person is eligible to vote");
	}
	else
	{
		printf("person can vote after %d years",18-age);
	}
}
