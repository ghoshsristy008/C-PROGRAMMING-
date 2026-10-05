//w.a.c.p revers the digitsof an whole no.
#include<stdio.h>
int main()
{
	int n, rev, digits;
	printf("enter the number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		digits=n%10;
		rev=rev*10+digits;
		n=n/10;
	}	
    printf("reverse=%d",rev); 
	return 0;
}
