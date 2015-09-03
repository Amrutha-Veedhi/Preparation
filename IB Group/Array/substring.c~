#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	char per[10];
	struct node *next,*prev;
};
struct node *head=NULL,*cur=NULL,*temp=NULL,*new=NULL;
Insert(char arr[])
{	int i,j,flag=0;
	new=(struct node*)malloc(sizeof(struct node));
	strcpy(new->per,arr);
	new->next=NULL;
	new->prev=NULL;
	if(head==NULL) {head=new;temp=head;}
	else
		{	
			temp->next=new;new->prev=temp;
			temp=temp->next;
		}
}
Print()
{
	for(temp=head;temp->next!=NULL;temp=temp->next)
		printf("%s\n",temp->per);
	printf("%s",temp->per);

}
Remove()
{		
	char string[1000];
	for(temp=head;temp!=NULL;temp=temp->next)
		{	new=temp;
			for(cur=temp->next;cur!=NULL;cur=cur->next)
				{
				if(strcmp(cur->per,temp->per)==0) {new->next=cur->next;}
				else if(strcmp(cur->per,temp->per)<0) 
					{
						strcpy(string,cur->per);
						strcpy(cur->per,temp->per);
						strcpy(temp->per,string);
					}
				new=cur;
				}
			
		}
}
main()
{
	char str[100],arr[100];
	int i,j,k,l=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<strlen(str);j++)
			{	l=0;
			for(k=i;k<=j;k++)
				{arr[l++]=str[k];}
			arr[l]='\0';
			if(l==0) {}
			else Insert(arr);
			}
	}
	Remove();
	Print();
return 0;

}
