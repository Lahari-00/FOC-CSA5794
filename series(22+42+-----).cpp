#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=20;i<=n;i++)
	{
		if(i%20==2)
		{
		sum=sum+i;
	    }
	}
	printf("sum of the series is: %d",sum);
	return 0;
}
