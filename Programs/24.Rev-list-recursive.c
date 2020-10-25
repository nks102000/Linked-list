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

struct node *rev_recurcive(struct node *st){
    if(st==NULL || (st)->next==NULL){
        return st;
    }
    struct node *secele=st->next;
    (st)->next=NULL;
    struct node *revrest= rev_recurcive(secele);
    secele->next=st;
    return revrest;
}