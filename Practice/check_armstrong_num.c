#include<stdio.h>
int main()
{
	int n,num,res=0,tot=0;printf("enter the number\n");scanf("%d",&n);num=n;
	while(num>0)
	{
		res=num%10;tot+=res*res*res;num=num/10;
	}
	if(tot==n)
		printf("the number is armstrong %d\n",n);
	else
		printf("the number is not armstrong num\n");
}
