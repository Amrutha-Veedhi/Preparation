#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct s
{
	int a;
	struct s *next;
};
struct s *head=NULL,*t1=NULL;
void print(){
struct s *temp=NULL;
temp=head;
while (temp!=NULL){
printf ("%d ",temp->a);
temp=temp->next;}
printf ("\n");
}
void append(int x)
{
	t1=(struct s *)malloc(sizeof(struct s));
	struct s *prev=head,*temp;
	t1->a=x;
	t1->next=NULL;
	if (head==NULL)
		head=t1;
	else
	{
		for (temp=head;temp!=NULL;temp=temp->next)
		{
			if (temp->a>x)
				break;
			prev=temp;
		}
		t1->next=prev->next;
		prev->next=t1;
	}
	print();
		
}
int main(){
char a[5];
int ch;
scanf ("%s",a);
//printf ("%sa",a);
while (a!="END"){
	scanf ("%d",&ch);
	if (strcmp(a,"I")==0)
	{
		printf ("hi!!!");
		append(ch);
	}
	scanf ("%s",a);
	}
return 0;
}