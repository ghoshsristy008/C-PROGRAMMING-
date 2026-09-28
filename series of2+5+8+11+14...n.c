//2+5+8+11+14+..upto n terms.w.c.p tp calculate sum of the given series

#include<stdio.h>
int main()
{
	int n,i=1,term=2,sum=0;
	printf("enter the of n:");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+term;
	term=term+3;
	i++;
	}
	printf("the sum of the series is=%d",sum);
	return 0;
}
