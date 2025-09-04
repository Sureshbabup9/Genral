#include<stdio.h>
int main()
{
	char s[]="Hi hello World you";
	printf("%s\n",s);
	int c=0,i,j,l=0;
	for(i=0;s[i];i++)
	{
		c++;
		if(s[i]==' ' || s[i]=='\n')
		{
			 --c;
			if(l<=c)
				l=c;
			c=0;
		}

	}
	printf("largest word length is %d\n",l);
}
