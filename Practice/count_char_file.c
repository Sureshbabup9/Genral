#include<stdio.h>
int main(int argc,char **argv)
{
	FILE *fp;char ch;int c=0;
	if(argc!=2){
		printf("follow this manner ./a.out source\n");return 0;}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("file not found/no data is there...\n");
		return 0;
	}
	while(ch=fgetc((fp))!=-1)
		{
		//c++;
		printf("%c ",ch);
			c++;
	}
	printf("no.of character in files are %d\n",c);

}
