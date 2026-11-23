//w.a.c.p to take inputs from the users and dispaly it to the screen as an array 

#include<stdio.h>
int main()
{
	int i,l,a[l];
	printf("enter the size of array: ");
	scanf("%d", &l);
	for(i=0;i<l;i++)
	{
	   printf("the array elements are: ");
		scanf("%d",&a[i]);
	}
    printf("the array elements after entering are: ");
	for(i=0;i<l;i++)
	{
			printf("%d ", a[i]);
	}
return 0;
}
