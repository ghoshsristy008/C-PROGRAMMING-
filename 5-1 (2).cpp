#include <stdio.H>
int main()
{
	 int n;
	 printf("\Enenter starting number=");
	 scanf("%d",&n);
	 while (n<=10)
	 {
	 	if(n%2!=0)
	 	{
	 		printf("%d\n",n);
		}
		n++;
	 }
	 return 0;
}
