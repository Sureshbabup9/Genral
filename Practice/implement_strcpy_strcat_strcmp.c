#include<stdio.h>
int main()
{
	char a[20],b[20],c[20],d[20];int i,j,temp,len;
	printf("enter the source string bw 1-20 \n");
	scanf("%s",a);
	printf("the source string is %s\n",a);
	for(len=0;a[len];len++);printf("the string len is %d\n",len);--len;
	printf("copy string is strcpy....\n");
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("the copy string is %s\n",b);
	printf("the string comparision is %s\n",a);
	for(i=0;a[i];i++)
	{
		if(a[i]!=b[i]){
			printf("the two strings are not equal\n");
			break;
		}
			
	}
	for(i=0;a[i];i++);
	for(j=0;b[j];j++)
	{
		a[i++]=b[j];
	}
	a[i]='\0';
	printf("final string is %s\n",a);
}
