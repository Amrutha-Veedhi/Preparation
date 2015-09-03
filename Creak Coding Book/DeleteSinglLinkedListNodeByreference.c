#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL,*temp=NULL,*new=NULL;
DeleteNode(struct node *temp){
	struct node *hai=temp->link;
	temp->data=hai->data;
	temp->link=hai->link;
}
int main()
{
	int i,nodenumber;
	for(i=1;i<=10;i++){
		new=(struct node *)malloc(sizeof(struct node));
		new->data=i;
		new->link=NULL;
		if(head==NULL)
			{head=new;temp=head;}
		else
		{
				temp->link=new;
				temp=temp->link;
			}
		}
	temp=head;
	temp=temp->link->link->link->link;
	printf("%d\n",temp->data);
	DeleteNode(temp);	
	for(temp=head;temp!=NULL;temp=temp->link){
		printf("%d\n",temp->data );
	}
	return 0;
}