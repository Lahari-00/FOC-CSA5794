#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10];
	printf("enter the no.of rows: ");
	scanf("%d",&r);
	printf("enter the no.of columns: ");
	scanf("%d",&c);
	printf("enter the elements of the matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("transpose matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
