#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
	int data;
	struct node *link;
};
LastNthNode(struct node *temp,int nodenumber){

	if(temp->link!=NULL)
		LastNthNode(temp->link,nodenumber);
	count++;
	if(count==nodenumber){
		printf("%d\n",temp->data);
	}

}
struct node *head=NULL,*temp=NULL,*new=NULL;
int main()
{
	int i,nodenumber;
	scanf("%d",&nodenumber);
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
	LastNthNode(head,nodenumber);
}