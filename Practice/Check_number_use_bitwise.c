#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number \n");
	scanf("%d",&n);
	printf("the number is %d\n",n);
	for(i=31;i>=0;i--)
	{
		printf("%d->%d",i,(n>>i)&1);
	}
	printf("\n");
	if((n>>0)&1==1)
		printf("the number is odd %d\n",n);
	else
		printf("the number is even %d\n",n);

}
