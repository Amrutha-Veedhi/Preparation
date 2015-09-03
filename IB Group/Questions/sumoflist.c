#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*new=NULL,*temp=NULL,*cur=NULL,*hhead=NULL;
struct node* Insert(struct node *dummy)
{	char ch;ch='a';
	while(ch!='\n')
	{
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d%c",&new->data,&ch);
		new->next=NULL;
		if(dummy==NULL) {dummy=new;temp=dummy;}
		else{temp->next=new;temp=temp->next;}
	}
	return dummy;
}
Printf(struct node *head)
{	
	for(temp=head;temp->next!=NULL;temp=temp->next) printf("%d ",temp->data);
	if(temp->data<10) printf("%d",temp->data%10);
	else printf("%d %d",temp->data%10,temp->data/10);
}
SummingUp()
{	cur=NULL;
	while((head!=NULL || hhead!=NULL))
	{
		new=(struct node*)malloc(sizeof(struct node));
		new->next=NULL;
		if(cur==NULL) 
				{
				new->data=head->data+hhead->data;
				cur=new;temp=cur;
				head=head->next;hhead=hhead->next;
				continue;
				}
		else if(head!=NULL && hhead!=NULL)
			{
				new->data=head->data+hhead->data;
				temp->next=new;
				temp=temp->next;
				head=head->next;hhead=hhead->next;continue;
			}
		else if(head==NULL && hhead!=NULL)
			{
				new->data=hhead->data;
				temp->next=new;
				hhead=hhead->next;
				temp=temp->next;continue;
			}
		else if(head!=NULL && hhead==NULL)
			{
				new->data=head->data;
				temp->next=new;
				head=head->next;
				temp=temp->next;continue;
			}
	}

}
Finalization(struct node *dummy)
{	int val;
	for(temp=dummy;temp!=NULL;temp=temp->next)
		{
			if(temp->next!=NULL )
				{	val=(temp->data/10);
					temp->data=temp->data%10;
					temp->next->data=(val+temp->next->data);
				}
			
		}
	Printf(dummy);
}
main()
{
	char ch;int val,flag=0;
	head=Insert(head);
	hhead=Insert(hhead);
	SummingUp();
	Finalization(cur);
	return 0;
	
}
