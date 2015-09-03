#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL,*new=NULL,*temp=NULL;
main()
{
	head=(struct node*)malloc(sizeof(struct node));
	head->next=NULL;
	char ch[3];int val;
	do
		{
			if(ch[0]=='I') {scanf("%d",&val);append(val);}
			if(ch[0]=='r') {display();}
			scanf("%s",ch);
		}while(strcmp(ch,"END")!=0);
}
append(int val)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	new->next=head->next;
	head->next=new;
}
display()
{
	for(temp=head->next;temp!=NULL;temp=temp->next) printf("%d\t",temp->data);printf("\n");
}
