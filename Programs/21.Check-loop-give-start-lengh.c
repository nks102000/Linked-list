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

int Check_loop_give_start_lengh(struct node **st,struct node **head){
    struct node *slow,*fast;
    slow=fast=*st;
    int x=0;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast){
            printf("\n List contains a loop");
            x=1;
        }
    }
    if(x==1){
        printf("\n List doesn't contains a loop");
        slow=*st;
        while(slow!=fast){
            fast=fast->next;
            slow=slow->next;
        }
        *head=slow;
        int c=1;    
        fast=fast->next;
        while(fast!=slow){
            c++;
            fast=fast->next;
        }
        return c;
    }
}