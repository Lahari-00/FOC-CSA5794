#include<stdio.h>
int main()
{
	int n1=0,n2=1,n,i,sum=n1+n2;
	printf("enter the n value: ");
	scanf("%d",&n);
	if(n>2)
	{
		printf("series is %d %d",n1,n2);
		for(i=3;i<=n;i++)
		{
			printf(" %d ",sum);
			n1=n2;
			n2=sum;
			sum=n1+n2;
		}
   	}
   	else if(n==1)
   	{
   		printf(" series is: %d",n1);
	}
	else
	{
		printf("enter a valid input");
	}
	return 0;
}
