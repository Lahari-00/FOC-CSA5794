#include<stdio.h>
int main()
{
	int a,b,c,flag=0;
	printf("enter the sides of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		flag=((b+c)>a);
	}
	else if(b>c)
	{
		flag=((a+c)>b);
	}
	else
	{
		flag=((a+b)>c);
	}
	if(flag)
	{
		if(a==b && b==c)
		{
			printf("equilateral triangle");
		}
		else if(a==b || b==c || c==a)
		{
			printf("isosceles triangle");
		}
		else if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
		{
			printf("right angle triangle");
		}
		else
		{
			printf("scalene triangle");
		}
	}
	else
	{
		printf("not a triangle");
	}
}
