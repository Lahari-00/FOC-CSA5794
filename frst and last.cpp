#include<stdio.h>
int main()
{
	int i,num,sum=0,last;
	printf("enter the number: ");
	scanf("%d",&num);
	last=num%10;
	while(num>10)
	{
		num=num/10;
	}
	sum=num+last;
	printf("first is %d",num);
	printf("last is %d",last);
	printf("sum is %d",sum);
	
}
