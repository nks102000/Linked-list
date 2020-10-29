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
}

int get_first_node(struct node **st ){

    struct node *ptr=*st;
    int n=ptr->data;
    *st=ptr->next;
    free(ptr);
    return n;
}

void check_palindrome(struct node *st){
    struct node *first=NULL,*second=NULL;
    split_into_2_from_mid(st,&first,&second);
    rev(&second);
    int x=0;
    while(first!=NULL && second!=NULL){
        if(get_first_node(&first)!=get_first_node(&second)){
            x=1;
            break;
        }
    }
    if(x==0){
        printf("\nList is palindrome");
    }
    else{
        printf("\nList is not palindrome");
    }

}