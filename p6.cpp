#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter n value:");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j==k && i%2==1)
			    printf("*");
			else
			    printf(" ");
		}
		if(i>=n)
		{
			k=k-1;
		}
		else
		{
			k=k+1;
		}
		printf("\n");
	}
	return 0;
}
