//w.a.c.p which accepts on interger number and print the multiplication of digits

#include<stdio.h>
int main()
{
	int n,i=1,r;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		i=i*r;
		n=n/10;
	}
	printf("the result is:%d",i);
	return 0;
	}

