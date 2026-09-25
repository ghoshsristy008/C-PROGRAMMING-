//w.a.c.p to display the odd numbers from 1-n
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number:");
	scanf("%d",&n);
	printf("odd numbers from 1 to %d\n",i);
	while(i<=n)	{
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
