#include<stdio.h>
int main()
{
	int i,rem,sum=0,n1,n;
	printf("enter the n value: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==n1)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
