#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next,*prev;
};
struct node *head=NULL,*new=NULL,*filp=NULL,*cur=NULL,*temp=NULL,*hhead=NULL;

main()
{
    char ch;int l;
    while(ch!='\n')
        {
            new=(struct node*)malloc(sizeof(struct node));
            scanf("%d%c",&new->data,&ch);
            new->next=NULL;
            new->prev=NULL;
            if(head==NULL)
                {
                    head=new;temp=head;
                }
            else
                {
                    temp->next=new;
                    new->prev=temp;
                    temp=temp->next;
                }
        }new=temp;
    int val=head->data;head=head->next;head->prev=NULL;filp=head;int d=0;l=1;
    if(val==1)
    {
        for(temp=head;temp!=NULL;temp=temp->next)
            {
                    if(temp->next==NULL) break;
                    printf("%d ",temp->data);
            }printf("%d",temp->data);

    }
    else
    {
                for(temp=head;temp!=NULL;temp=temp->next)
                    {
                        if(val==l)
                            {       cur=temp;
                                    while(cur!=filp->prev)
                                        {
                                            if(temp->next==NULL && cur==filp) 
                                            	{printf("%d",cur->data);cur=cur->prev;continue;}
                                            printf("%d ",cur->data);
                                            cur=cur->prev;
                                        }
                                        filp=temp->next;
                                        l=0;
                            }
                         
                        new=temp;
                        l++;
                    }
                    if(l!=1)
                    {
                        for(temp=new;;temp=temp->prev)
                        {

                            if(temp==filp) break;
                            printf("%d ",temp->data);
                        }
                        printf("%d",temp->data);
                    }
    }
    return 0;
}
