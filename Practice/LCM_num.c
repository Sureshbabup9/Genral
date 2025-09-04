#include<stdio.h>
int gcd(int a,int b)
{
	int t=0;
	if(a>b)
		t=a%b;
	else
		t=b%a;
	a=b;b=t;
	if(t==0){
		return a;}
	gcd(a,b);
}
int lcd(int a,int b)
{
       int c=gcd(a,b);
	       printf("the gcd is %d\n",c);
	printf("the lcm is %d\n",(a*b)/c);
}
int main()
{
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d %d",&a,&b);
	lcd(a,b);
}
