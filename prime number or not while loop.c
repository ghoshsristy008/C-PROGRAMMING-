//W.A.C.P TO CHECK WHETHER A NUMBER PRIME OR NOT WHILE LOOP
    #include<stdio.h>
    int main()
    {
	int n,i=2;
	printf("enter a number");
	scanf("%d",&n);
	while (i<n)
	{
	if(n%i==0)
	{
	break;
	i++;
	}
	}
	if(n<=1)
	{
	printf("not prime number");
	}
	else if(i==n)
	{
	printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
	return 0;
    }
