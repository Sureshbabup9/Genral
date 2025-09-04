#include<stdio.h>
int main()
{
	printf("enter the number of times to print\n");
	int n;
	scanf("%d",&n);print(n);

}
void print(int n){
	if(n>0)
	{
		printf("Hello World\n");print(n-1);
	}
}
