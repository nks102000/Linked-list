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

void merg_2_sorted_list(struct node **st1,struct node **st2,struct node **st3){

    struct node *t1=*st1;

    struct node *t2=*st2;

    while(t1!=NULL&&t2!=NULL){
        if(t1->data>t2->data){
            creat_list(st3,t2->data);
            t2=t2->next;
        }
        else if(t1->data<t2->data){
            creat_list(st3,t1->data);
            t1=t1->next;
        }
        else{
            creat_list(st3,t1->data);
            t1=t1->next;
            t2=t2->next;
        }
    }
    while(t1!=NULL){
        creat_list(st3,t1->data);
        t1=t1->next;
    }
    while(t2!=NULL){
        creat_list(st3,t2->data);
        t2=t2->next;
    }
}