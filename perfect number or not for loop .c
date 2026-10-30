//w.a.c.p to check wheather a number is perfect or not for loop 

 #include<stdio.h>
 int main()
 {
 	int n,i=1,sum=0;
 	printf("enter a number");
 	scanf("%d",&n);
 	for(i=1;i<n;i++)
 	{
 		if (n%i==0)
 		{
 			sum=sum+i;
		 }
	 }
	 if(sum==n)
	    {
	    	printf("it is a perfect number");
		}
		else
		{
			printf("it is not a prfect number");
		}
		return 0;
	  }
