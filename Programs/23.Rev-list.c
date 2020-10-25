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

void rev(struct node **st){
    struct node *t2,*t1,*p;
    p=NULL;
    t1=*st;
    while(t1!=NULL){
        t2=t1->next;
        t1->next=p;
        p=t1;
        t1=t2;
    }
    *st=p;
    display_list(st);
}