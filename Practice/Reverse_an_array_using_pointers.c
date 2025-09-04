#include<stdio.h>
int reverse(int *a,int n)
{
	int *s=a,*e=a+n;
	while(s<e)
	{
 		int temp=*s;
		*s=*e;
		*e=temp;s++;e--;
	}
}
int main()
{
	int a[]={1,2,3,4,5},s,i;
	s=sizeof(a)/sizeof(a[0]);
	printf("the array elements are \n");
	for(i=0;i<s;i++)
	{
		printf("a[%d]=%d\n",i,*(a+i));
	}
	reverse(a,s-1);
	 printf("the array elements are \n");
        for(i=0;i<s;i++)                                                                                                                                           {
                printf("a[%d]=%d\n",i,a[i]);
        }
}
