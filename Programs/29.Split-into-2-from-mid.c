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
void split_into_2_from_mid(struct node *st,struct node **st1,struct node **st2){
    struct node *fast,*slow;

    if(st==NULL || st->next==NULL){
        *st1=st;
        *st2=NULL;
    }
    else{
        slow=st;
        fast=st->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *st1=st;
        *st2=slow->next;
        slow->next=NULL;
    }
}