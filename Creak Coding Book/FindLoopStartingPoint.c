#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=NULL,*temp=NULL,*new=NULL;
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
	temp->link=head->link->link->link->link;
	printf("%d\n",temp->link->data);
	new=head->link->link;
	for(temp=head;temp!=NULL;temp=temp->link){
		if(temp->data==new->data){

			printf("%d\n",temp->data);
			break;
		}
		//printf("%d\n",temp->data);
		new=new->link->link;
	}
	return 0;
}