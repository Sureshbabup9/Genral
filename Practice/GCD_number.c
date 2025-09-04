#include<stdio.h>
int gcd_num(int a,int b)
{
	int t=0;
	if(a>b)
	   t=a%b;
	else
		t=b%a;
	if(t==0)
	{
		printf("gcd is %d\n",b);return 0;
	}
	a=b;b=t;
	gcd_num(a,b);
}
int main()
{
	int a,b,t=0;
	printf("enter the a,b numbers \n");
	scanf("%d %d",&a,&b);
	gcd_num(a,b);
}

