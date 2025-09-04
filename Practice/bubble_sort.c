#include<stdio.h>
void print(int a[],int n)
{
  int i;
  for(i=0;i<n;i++)
	  printf("a[%d]=%d\t",i,a[i]);
  printf("\n");
}
void Bubble_sort(int a[],int n)
{
	int i,j;
	 for(i=0;i<5;i++)
        {
                for(j=i+1;j<5;j++)
                {
                        if(a[j]<a[i])
                        {
                                a[i]=a[i]^a[j];
                                a[j]=a[i]^a[j];
                                a[i]=a[i]^a[j];

                        }
                }
        }
}
void Selection_sort(int a[],int n)
{
	int i,j,min,m,temp;
	for(i=0;i<n-1;i++)
	{
		m=i;
		for(j=i+1;j<n;j++)
		{
		if(a[j]<a[m]){
			m=j;}
		
		
	       }
		//temp=a[i];
	//	a[i]=a[m];
		//a[m]=temp;
		if(i!=m){
		a[i]=a[i]^a[m];
		a[m]=a[i]^a[m];
		a[i]=a[i]^a[m];	}
	}
		

}
int main()
{
	int a[]={3,2,1,6,5},n=5;
	printf("Before sorting array elements are ....\n");
	print(a,n);
//	Bubble_sort(a,n);
	Selection_sort(a,n);
	printf("after sorting array elements ...\n");
	print(a,n);
}
