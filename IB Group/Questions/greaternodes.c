#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*new=NULL,*cur=NULL,*dummy=NULL;
Insert(int val)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(head==NULL) {head=new;temp=head;}
	else {temp->next=new;temp=temp->next;}
}
Printf()
{
	for(temp=head;temp->next!=NULL;temp=temp->next) 
		printf("%d ",temp->data);
	printf("%d",temp->data);
}
RemoveNodes()
{
	int flag=0,flag1=0;
	while(1)
		{
			cur=head,dummy=head,flag=0,flag1=0;
			for(temp=head;temp->next!=NULL;temp=temp->next)
				{
					dummy=cur;
					cur=temp;
					temp=temp->next;
					if(cur->data<temp->data)
						{
							if(cur==head) head=head->next;
							else dummy->next=temp;
							
							flag=1;flag1=1;
						}
					if(flag1==1) break;
					else temp=cur;
				}
			if(flag==0 && flag1==0) break;		
		}
}
main()
{
	char ch;int val;
	while(ch!='\n')
		{
			scanf("%d%c",&val,&ch);
			Insert(val);
		}
	RemoveNodes();
	Printf();
	return 0;
}
