#include<stdio.h>
int main()
{
	char s[20];
	printf("enter the string \n");
	scanf("%s",s);
	printf("the string %s\n",s);
	int i,j,temp,c=0;
	for(j=0;s[j];j++);printf("the length is %d\n",j);--j;
	for(i=0;i<=j;i++,j--)
	{
		if(s[j]!=s[i])
		{
			printf("the string is not palindrome %s\n",s);
			c=1;break;
		}
	}
	if(c==0)
		printf("The string is palindrome %s\n",s);
}
