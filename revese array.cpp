#include<stdio.h>
int main()
{
	int n,i,a[10];
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
