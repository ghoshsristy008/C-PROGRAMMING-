//w.a.c.p find the sum of the following series 1!+3!+5!+.. upto n numbers

#include<stdio.h>
int main()
{
int c=1,i=1,a=1,n;
long int fact,sum=0;
printf("enter of terms:");
scanf("%d",&n);
while(c<=n){
	i=1;
	fact=1;
	while(i<=a){
		fact=fact*i;
		i++;
	}
	sum=sum+fact;
	c++;
	a=a+2;
}
printf("sum of the terms= %d",sum);
return 0;
}
