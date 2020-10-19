#include<stdio.h> 
#include<stdlib.h> 
struct node* find_mid(struct node**st){
    struct node *p,*q;
    p=q=*st; 
    while(q!=NULL&&q->next!=NULL){
        q=q->next->next;
        p->next;
    }
    return p;
}