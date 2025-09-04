#include<stdio.h>
int main()
{
	int a[20],n,i,j,temp,k;
	printf("enter the array elements size\n");
	scanf("%d",&n);
	printf("enter the array elements...\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	 for(i=0;i<n;i++)                                                                                                                                            {
                printf("a[%d]=%d ",i,a[i]);
        }
	 for(i=0;i<n-1;i++)
	 {
		 for(j=0;j<(n-i-1);j++)
		 {
			 if(a[j+1]<a[j])
			 {
				 temp=a[j+1];
				 a[j+1]=a[j];
				 a[j]=temp;
			 }
		 }
	 }
	 printf("after sorting elements....\n");
	 for(i=0;i<n;i++)                                                                                                                                            {                                                                                                                                                                  printf("a[%d]=%d ",i,a[i]);                                                                                                                         }
	int l=0;
 	 for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;a[k];k++)
				{
					a[k]=a[k+1];
				}
				l++;
				a[k]='#';--j;
			}
		
		}
	}
	printf("\n$$$$\n");
	 for(i=0;i<n-l;i++)                                                                                                                                            {                                                                                                                                                                  printf("a[%d]=%d ",i,a[i]);                                                                                                                         }

}
