#include<stdio.h>
int main()
{
	int i,n,flag=0,a[10];
	printf("enter the no.of elements: ");
	scanf("%d",&n);
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1] && a[i]==a[i+2])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("consective numbers ");
	}
	else
	{
		printf("not a consecutive numbers");
	}
}
