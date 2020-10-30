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

struct node *Give_k_divided_n_node_from_begning(struct node *st,int k){
    struct node *temp;
    int i=0;
    if(k<=0){
        return NULL;
    }
    for(;st!=NULL;st=st->next){
        if(i%k==0){
            if(temp==NULL){
                temp=st;
            }
            else
            {
                temp=temp->next
            }           
        }
        i++;
    }
    return temp;
}