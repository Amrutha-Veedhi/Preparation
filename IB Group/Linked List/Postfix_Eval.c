#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *head=NULL;

void push(int value){
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->data=value;
    temp->next=head;
    head=temp;
}

int pop(){
    Node *temp=head;
    int val=temp->data;
    head=head->next;
//    free(temp);
    return val;
}

int main(){
    char s[10],ch;
    do{
        scanf("%s%c",s,&ch);
        if(!strcmp(s,"*")){
            int val=pop()*pop();
            push(val);
        }
        else if(!strcmp(s,"/")){
            int val=pop();
            push(pop()/val);
        }
        else if(!strcmp(s,"-")){
            int val=pop();
            push(pop()-val);
        }
        else if(!strcmp(s,"+")){
            int val=pop()+pop();
            push(val);
        }
        else
            push(atoi(s));
    }while(ch!='\n');
    printf("%d\n",head->data);
    return 0;
}
