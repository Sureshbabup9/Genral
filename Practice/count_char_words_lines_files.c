#include<stdio.h>
int main(int argc,char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("usage ./a.out file.txt\n");
		return 0;
	}
	char ch;
	int c=0,l=0,w=0;
	while((ch=fgetc(fp))!=-1)
	{
		printf("%c",ch);
		c++;
		if(ch==' '|| ch=='\n')
			w++;
		if(ch=='\n')
			l++;
	}
	printf("characters are =%d words=%d lines=%d\n",c,w,l);
}

