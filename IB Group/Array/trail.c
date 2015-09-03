#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *head=NULL,*new=NULL,*temp=NULL,*cur=NULL,*hhead=NULL,*hnew=NULL,*htemp=NULL,*hcur=NULL;
char i,ii[4]="hai";
int l=0;
main()
{
head=(struct node*)malloc(sizeof(struct node));
hhead=(struct node*)malloc(sizeof(struct node));
head->next=NULL;head->data=-2000;
hhead->next=NULL;
MakeList();
i='a';l=1;
MakeList();
for(temp=head->next;temp!=NULL;temp=temp->next) printf("%d\t",temp->data);printf("\n");
for(temp=hhead->next;temp!=NULL;temp=temp->next) printf("%d\t",temp->data);printf("\n");
}
MakeList()
{	
int flag=0,flag1=0;temp=head,htemp=head,hcur=head;
while(i!='\n' && l==0)
	{	
	flag=0;
	new=(struct node*)malloc(sizeof(struct node));
	scanf("%d%c",&new->data,&i);
	new->next=NULL;
	cur=head;
	
	for(temp=head->next;temp!=NULL;temp=temp->next)
		{
		
		if(temp->data>=new->data)
			{
				if(temp->data==new->data) {flag=1;}
				else {flag=0;}
				break;
			}
		cur=temp;
		}
	
	if(flag==0)
		{
		new->next=temp;
		cur->next=new;
		}
	}
while(i!='\n' && l==1)
	{	flag=0;flag1=0;
	new=(struct node*)malloc(sizeof(struct node));
	scanf("%d%c",&new->data,&i);
	new->next=NULL;	
	for(temp=head->next;temp!=NULL;temp=temp->next)
		{
			if(temp->data==new->data) {flag=1;break;}
		}
	hcur=head;
	for(htemp=hhead->next;htemp!=NULL;htemp=htemp->next)
		{
			if(htemp->data==new->data) {flag1=1;break;}
			hcur=htemp;
		}
	if(flag==0 && flag1==0)
		{	
			for(temp=head->next;temp!=NULL;temp=temp->next)
				{
				if(temp->data>new->data) break;
				cur=temp;
				}
			new->next=cur->next;
			cur->next=new;
		}
	if(flag==1 && flag1==0)
		{	hcur=hhead;
			for(htemp=hhead->next;htemp!=NULL;htemp=htemp->next)
				{
				if(htemp->data>new->data) {break;}
				hcur=htemp;
				}
			new->next=htemp;
			hcur->next=new;
			
		}
	}
}
