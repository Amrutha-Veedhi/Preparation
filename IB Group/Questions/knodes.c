#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*new=NULL,*filp=NULL;
main()
{
	char ch;
	int val,l=1;
	while(ch!='\n')
	{
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d%c",&new->data,&ch);
		new->next=NULL;
		if(head==NULL)
			{
				head=new;
				temp=head;
			}
		else 
			{
				temp->next=new;
				temp=temp->next;
			}	
	}
	val=head->data;l=1;head=head->next;filp=head;
	for(temp=head;temp!=NULL;temp=temp->next)
		{
			if(val==l && filp==head)
				{
				cur=temp->next;
				temp->next=NULL;
				filp->next=cur;
				filp=temp;
				head=filp;
				l=1;	
				}
			l++;	
		}
}
