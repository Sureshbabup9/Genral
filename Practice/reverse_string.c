#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="suresh Babu";
	printf("%s\n",s);
//	printf("string reverse is =%s\n",strrev(s));
	int i,temp,j;for(j=0;s[j];j++);printf("the length is %d\n",j);
	for(i=0;i<=(j/2);i++)
	{
		temp=s[i];
		s[i]=s[j-i-1];
		s[j-i-1]=temp;
	}
	printf("%s\n",s);
	return 0;
}
