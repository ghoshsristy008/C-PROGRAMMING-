//W.A.C.P TO CHECK WHETHER A NUMBER PRIME OR NOT FOR LOOP

 #include<stdio.h>
 int main()
 {
 	int n,i=2;
 	printf("enter any number");
 	scanf("%d",&n);
    for ( i=2;i<=n;i++)
    if(n%i==0)
	{
	break;
}
    if(n<=1)
	{
	printf("not prime number");
	}
	else if(i==n)
    {
	printf("prime number");
	}
	return 0;
}
