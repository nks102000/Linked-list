#include<stdio.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

void creat_list(struct node **st ,int n){

    struct node *temp;

    struct node *new1 = (struct node *)malloc(sizeof(struct node));

    new1->data=n;

    new1->next=NULL;

    if(*st==NULL){
        *st=new1;
    }
    else{
        temp=*st;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next = new1;
    }
}

void Split_list_into_2_with_alternate_elements_in_each(struct node **st,struct node **st1,struct node **st2){
    struct node *temp=*st,*a,*b;
    while(temp!=NULL){
        struct node *NewNode =temp;
        temp=NewNode->next;
        NewNode->next=NULL;
        if(a==NULL){
            a=NewNode;
        }
        else{
            a->next=NewNode;
        }
        if(temp!=NULL){
        struct node *NewNode =temp;
        temp=NewNode->next;
        NewNode->next=NULL;
        if(b==NULL){
            b=NewNode;
        }
        else{
            b->next=NewNode;
        }   
        }
    }
    *st1=a;
    *st2=b;
}