#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number n and p \n");
	scanf("%d %d",&n,&p);
	printf("the number %d and power %d\n",n,p);
        if(p==0)
	{
		printf("%d power %d is 1\n",n,p);
		return 0;
	}
	 if(p==1)
        {
                printf("%d power %d is %d\n",n,p,n);
                return 0;
        }
	int t=1,t1=0,i;
	for(i=0;i<p;i++){
	  t=t*n;
	
	}
	printf("%d power %d is %d\n",n,p,t);

}
