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

struct node *Rearrange_list_to_get_data_leass_than_or_equal_to_x_before_x(struct node **st,int x){
    struct node *less=NULL,*more=NULL,*lesshead=NULL,*morehead=NULL;
    struct node *temp=*st;
    while(temp!=NULL){
        if(temp->data<=x){
            if(less==NULL){
                struct node *NewNode = (struct node *)malloc(sizeof(struct node));
                NewNode->data=temp->data;
                NewNode->next=NULL;
                less=NewNode;
                lesshead=less;
            }
            else{
                struct node *NewNode = (struct node *)malloc(sizeof(struct node));
                NewNode->data=temp->data;
                NewNode->next=NULL;
                less->next=NewNode;
            }
        }
        else{
            if(more==NULL){
                struct node *NewNode = (struct node *)malloc(sizeof(struct node));
                NewNode->data=temp->data;
                NewNode->next=NULL;
                more=NewNode;
                morehead=more;
            }
            else{
                struct node *NewNode = (struct node *)malloc(sizeof(struct node));
                NewNode->data=temp->data;
                NewNode->next=NULL;
                more->next=NewNode;
            }
        }
        temp=temp->next;
    }
    less->next=morehead;
    return lesshead;
}