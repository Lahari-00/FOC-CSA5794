#include<stdio.h>
int main()
{
	int n,fact=1,i=1;
	printf("enter the number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of the num is %d",fact);
	return 0;
}
