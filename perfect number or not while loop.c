//w.a.c.p to check wheather a number is perfect or not while loop 

 #include<stdio.h>
 int main()
 {
 	int n,i=1,sum=0;
 	printf("enter a number");
 	scanf("%d",&n);
 	while(i<n)
 	{
 		if (n%i==0)
 		{
 			sum=sum+i;
		 }
		 i++;
	 }
	 if(n==sum)
	    {
	    	printf("it is a perfect number");
		}
		else
		{
			printf("it is not a prfect number");
		}
	  }
