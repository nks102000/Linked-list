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

void del_duplicate_node_from_unsorted_list(struct node **st){
    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->next=*st;
    struct node *Newcurrent=current;
    current=current->next;
    while(current->next!=NULL){
        struct node *var=current->next;
        struct node *temp=current;
        
        while(var!=NULL){
            if(current->data==var->data){
                struct node *temp1=temp->next;
                temp->next=var->next;
                var=var->next;
                free(temp1);
            }
            else
            {
                var=var->next;
                temp=temp->next;   
            }
        }
        current=current->next;
    }
    *st=Newcurrent->next;
}