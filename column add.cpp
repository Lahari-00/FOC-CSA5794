#include<stdio.h>
int main()
{
	int a[10][10],sum=0;
	int r1,r2,c1,c2,i,j;
	printf("no.of rows of mat:");
	scanf("%d",&r1);
	printf("no.of columns of mat: ");
	scanf("%d",&c1);
	printf("enter elements of matrix : ");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<c1;j++)
	{
		for(i=0;i<r1;i++)
		{
			sum=sum+a[j][i];
		}
	}
	printf("%d",sum);
}
