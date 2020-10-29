#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *random;
};

void clone_list_with_1_random_data_in_list(struct node *st){
    struct node *t,*t1;
    t=st;
    while(t!=NULL){
        t1=(struct node *)malloc(sizeof(struct node));
        t1->data=t->data;
        t1->next=t->random;
        t->random=t1;
        t=t->next;
    }
}