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

void Remove_duplicate_node_from_sorted_list(struct node **st){
    struct node *temp=NULL;
    struct node *t=*st;
    while(t->next!=NULL){
        if(t->data==t->next->data){
            temp=t->next;
            t->next=t->next->next;
            free(temp);
        }
        else{
            t=t->next;
        }
    }
}