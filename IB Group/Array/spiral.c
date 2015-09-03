#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}nodes;
nodes *head=NULL,*new=NULL,*temp=NULL;
main()
{	int ch;
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;new=head;
	do
	{
		if(ch==1) append();
		if(ch==2) delete();
		if(ch==3) length();
		if(ch==4) print();
		printf("====Menu=====\n1)Append\n2)Delete\n3)Length\n4)Print\n5)Exit\n=============\n");
		printf("Enter Choice ");
		scanf("%d",&ch);
	}while(ch!=5);
}
append()
{
	new=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\t");
	scanf("%d",&new->data);
	new->next=NULL;
	for(temp=head;temp->next!=NULL;temp=temp->next) ;
	temp->next=new;
}
delete()
{	int val,flag=0;
	printf("Value of Node U want to delete ");
	scanf("%d",&val);new=head;
	for(temp=head->next;temp!=NULL;temp=temp->next)
		{
		if(temp->data==val)
			{new->next=temp->next;flag=1;}
		new=temp;
		}
	if(flag==0) printf("Sorry Your Entred Number Not in List\n");
}
length()
{	int val=0;
	for(temp=head->next;temp!=NULL;temp=temp->next) val++;
	printf("Length of List is %d\n",val); 
}
print()
{
	for(temp=head->next;temp!=NULL;temp=temp->next) printf("%d\t",temp->data); printf("\n");
}
