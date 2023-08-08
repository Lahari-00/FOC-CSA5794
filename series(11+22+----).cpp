#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=10;i<=n;i++)
	{
		if(i%11==0)
		{
		sum=sum+i;
	    }
	}
	printf("sum of the series is: %d",sum);
	return 0;
}
