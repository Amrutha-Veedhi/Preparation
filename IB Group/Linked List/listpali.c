#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*new=NULL;
main()
{	
	char ch;int flag=0;
	while(ch!='\n')
		{
			new=(struct node*)malloc(sizeof(struct node));
			scanf("%d%c",&new->data,&ch);
			new->next=NULL;
			if(head==NULL) {head=new;temp=head;}
			else
				{
					temp->next=new;
					temp=temp->next;
				}
		}
	for(;head!=NULL;)
	{
		temp=head;new=head;
		while(temp->next!=NULL) {new=temp;temp=temp->next;}
		if(head->data==temp->data && temp!=head) 
			{
			head=head->next;
			new->next=NULL;
			continue;
			}
		
		else if(head->data==temp->data && temp==head) {break;}
		else if(head->next==temp && head->data==temp->data) {break;}
		else {flag=1;break;}
	}
	if(flag==0) printf("yes\n");
	else printf("no\n");
}
