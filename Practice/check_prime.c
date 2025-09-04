#include<stdio.h>
int main()
{
	printf("Hello.....\n");
	int n,i;
	printf("enter a number....\n");
	scanf("%d",&n);
	printf("the number is %d\n",n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("this is prime number %d\n",n);
			break;
		}
	}
}
