#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL,*new=NULL,*cur=NULL,*temp=NULL;
main()
{
	head=(struct node*)malloc(sizeof(struct node));
	head->data=-20000;
	head->next=NULL;
	char ch[3];int val;
	do
		{
		if(ch[0]=='I') {scanf("%d",&val);Append(val);}
		if(ch[0]=='D') {scanf("%d",&val);Delete(val);}
		if(ch[0]=='d') {Display();}
		
		scanf("%s",ch);
		}while(strcmp(ch,"END")!=0);
}
Append(int val)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	cur=head;
	for(temp=head;temp!=NULL;temp=temp->next)
		{
		if(temp->data>val) break;
		cur=temp;
		}
		new->next=cur->next;
		cur->next=new;
}
Display()
{
	for(temp=head->next;temp!=NULL;temp=temp->next) printf("%d\t",temp->data);
}
Delete(int val)
{	int i=1;cur=head;
	for(temp=head->next;temp!=NULL;temp=temp->next)
		{
			if(val==i++) break;
			cur=temp;
		}
	cur->next=temp->next;
}
