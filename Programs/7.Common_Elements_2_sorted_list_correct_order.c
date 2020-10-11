//Given 2 sorted list and return a list with common elements from both the list(correct order).
#include<stdio.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

void creat_list(struct node **st,int n){
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    new1->data=n;
    new1->next=*st;
    *st=new1;
}

struct node *Common_Elements_2_sorted_list_rev_order(struct node **st1,struct node **st2){
    struct node *head=NULL;
    struct node *tail;
    struct node *t1,*t2;
    t1=*st1;
    t2=*st2;
    while(t1!=NULL&&t2!=NULL){
        if(t1->data==t2->data){
            if(head==NULL){
                creat_list(&head,t1->data);
                tail=head;
            }
            else{
                creat_list((&tail->next),t1->data);
                tail=tail->next;
            }
            t1=t1->next;
            t2=t2->next;
            //Common_Elements_2_sorted_list_rev_order(t1,t2,head);
        }
        else if(t1->data>t2->data){
            t1=t1->next;
            //Common_Elements_2_sorted_list_rev_order(t1,t2,head);
        }
        else{
            t2=t2->next;
            //Common_Elements_2_sorted_list_rev_order(t1,t2,head);
        }
    }
    return head;   
}