#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char data;
	struct node *next;
};
struct node *head=NULL,*new=NULL,*temp=NULL;
main()
{	int i,flag=0;
	char str[1000];
	scanf("%s",str);
	head=(struct node*)malloc(sizeof(struct node));
	head->next==NULL;temp=head;
	for(i=0;str[i]!='\0';i++)
		{	
			new=(struct node*)malloc(sizeof(struct node));
			new->data=str[i];
			new->next=NULL;
			if(str[i]=='{') {new->next=head->next;head->next=new;flag++;}
			if(str[i]=='[') {new->next=head->next;head->next=new;flag++;}
			if(str[i]=='(') {new->next=head->next;head->next=new;flag++;}
			if(str[i]=='}') 
				{
					if(head->next->data=='{') 
					{head->next=head->next->next;flag--;continue;}
					else break;
				}
			if(str[i]==']') 
				{
					if(head->next->data=='[') 
					{head->next=head->next->next;flag--;continue;}
					else break;
				}
			if(str[i]==')') 
				{
					if(head->next->data=='(') 
					{head->next=head->next->next;flag--;continue;}
					else break;
				}
		}
if(flag!=0) printf("No\n");
else printf("Yes\n");
}
