#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL,*cur=NULL,*new=NULL,*temp=NULL;
Insert(int val)
{
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=head;
	head=new;
}
main()
{
	char str[10],ch,value;
	do
	{	scanf("%s%c",str,&ch);
		
		if(strcmp(str,"*")==0)
			{
				value=(head->data)*(head->next->data);
				head=head->next->next;
				Insert(value);
			}
		else if(strcmp(str,"/")==0)
			{
				value=(head->next->data)/(head->data);
				head=head->next->next;
				Insert(value);
			}
		else if(strcmp(str,"-")==0)
			{
				value=(head->next->data)-(head->data);
				head=head->next->next;
				Insert(value);
			}
		else if(strcmp(str,"+")==0)
			{
				value=(head->data)+(head->next->data);
				head=head->next->next;
				Insert(value);
			}
		else Insert(atoi(str));
		
	}while(ch!='\n');
	printf("%d\n",head->data);
	return 0;
}
