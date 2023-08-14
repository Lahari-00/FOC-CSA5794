#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	int upper=0,i,lower=0;
	printf("enter the string: ");
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			upper+=1;
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			lower+=1;
		}
	}
	printf("no.of upper=%d",upper);
	printf("no.of lower=%d",lower);
}
