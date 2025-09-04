#include<stdio.h>
int main()
{
	char a[100],freq[100]={0};
	int i,j,c=1,m=0;
	printf("enter a string \n");
	scanf("%s",a);
	printf("the string is %s\n",a);
	/*for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
		{
			if(i!=j && a[i]==a[j])
			{
				c++;
				break;

			}
		}
	//	freq[i]=c;
		if(c==1){
			printf("the first occurence %c\n",a[i]);break;
		}
		c=1;
	}*/

	/*for(i=0;a[i];i++)
	{
		printf("%c %d\n",a[i],freq[i]);
	}*/
	for(i=0;a[i];i++)
	{
		freq[a[i]-'a']++;
//		printf("%d\n",freq[i]);

	}
	for(i=0;i<22;i++)
	{
		if(freq[i])
		{
			printf("%c %d\n",i+'a',freq[i]);
		}
	}

}
