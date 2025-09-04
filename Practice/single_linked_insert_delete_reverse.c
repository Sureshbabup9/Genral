#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int rollno;
	char name[20];
	struct student *next;
}ST;
ST *hp=0;
void disp(ST *p)
{
	printf(".....\n");
	while(p)
	{
		printf("%d %s->",p->rollno,p->name);
		p=p->next;
	}
}

int count(ST *p)
{
	int c=0;
	while(p){
	c++;
	p=p->next;
	}
	return c;
}

void reverse(ST **p)
{
	ST *temp,v,*temp1;
	int i,j,c=count(hp);printf("the count is %d\n",c);
	temp=*p;
	for(i=0;i<=c/2;i++)
	{
		temp1=*p;
		for(j=0;j<c-i-1;j++)
			temp1=temp1->next;

		v.rollno=temp->rollno;strcpy(v.name,temp->name);
		temp->rollno=temp1->rollno;strcpy(temp->name,temp1->name);
		temp1->rollno=v.rollno;strcpy(temp1->name,v.name);
		temp=temp->next;
	}

}
void insert_begin(ST **p)
{
	ST *temp;
	temp=malloc(sizeof(ST));
	printf("enter the rollno\n");
	scanf("%d",&temp->rollno);
	printf("enter the name\n");
	scanf("%s",temp->name);
	temp->next=*p;
	*p=temp;
//	display(p);

}
void delete(ST **p)
{
	int num;
	printf("enter the number you want to delete\n");scanf("%d",&num);
	ST *temp,*temp1;
	temp=*p;
	while(temp)
	{
		if(temp->rollno==num)
		{
			if(*p==temp)
				*p=temp->next;
			else
				temp1->next=temp->next;
			free(temp);
			break;
		}
		temp1=temp;
		temp=temp->next;
	}

}
int main()
{
//	printf("enter your choice.... y or Y \n");
	char ch;
//	scanf("%d",&ch);
      do{
	      printf("1.insert \n4.delete \n7.reverse\nenter your choice Y to y\n");
	      scanf("%ch",&ch);
	}while(ch=='y'||ch=='Y');
     // switch(ch)
	//{
		insert_begin(&hp);disp(hp);
insert_begin(&hp);disp(hp);
insert_begin(&hp);disp(hp);
      insert_begin(&hp);disp(hp);		
		      delete(&hp);        disp(hp);
		      reverse(&hp);disp(hp);
//	}
}

