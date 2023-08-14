#include<stdio.h>
int main()
{
	int i,num,flag=0,n1;
	printf("enter the number: ");
	scanf("%d",&num);
	n1=num;
	while(num!=1)
	{
		if(num%2!=0)
		{
			flag=1;
			break;
		}
		else
		{
			num=num/2;
		}
	}
	if(flag==0)
	{
		printf("%d can be expressed as 2^n",n1);		
	}
	else
	{
		printf("%d cannot be expressed as 2^n",n1);
	}
}
