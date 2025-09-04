#include<stdio.h>
void large(int *a,int n)
{
	int l=*a,*s=a;s++;
	printf("l is %d\n",l);
	while(n>0)
	{
		if(l<*s){
			l=*s;
		printf("....%d\n",l);
		}
		s++;n--;
	}
	printf("largest is %d \n",l);
}
int main()
{
	int i,s,a[]={1,2,3,4,5};
	s=sizeof(a)/sizeof(a[0]);
	printf("the array elemts are \n");
	for(i=0;i<s;i++)
	printf("%d\n",a[i]);
	large(a,s-1);
//	printf("the array elemts are \n");
  //      for(i=0;i<s;i++)                                                                                                                                            printf("%d\n",a[i]);
}
