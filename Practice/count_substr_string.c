#include<stdio.h>
#include<string.h>
int main()
{

	char a[]="hello hi hi how",b[]="hi";
	printf("the string  A is %s\n B is %s\n",a,b);
	int i,j=0,k,c,bb=0;
	for(i=0;a[i];i++)
	{
		c=1;
		for(j=0;b[j];j++)
		{
			if(a[i+j]!=b[j])
			{
				c=0;break;
			}
		}
		if(c){
			bb++;
	//		printf("the sub string is found %s=%d\n",b,bb);
		}
	}
	 if(bb>0){
              //          bb++;
                        printf("the sub string is found %s=%d\n",b,bb);
                }
}
