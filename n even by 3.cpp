#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("enter the n value: ");
	scanf("%d",&n);
	for(i=0;i<=n;i+=2)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	printf("sum is %d",sum);
}
