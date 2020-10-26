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

void Check_elements_even_or_odd(struct node *st){
    while(st!=NULL && st->next!=NULL){
        st=st->next->next
    }
    if(st!=NULL){
        printf("\nEven");
        return;
    }
    printf("\nODD");
}