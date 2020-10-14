#include<stdio.h>

void Del_Nth_node(struct node **st,int k){
    struct node *t1,*t2;
    t1=t2=*st;
    for(int i=0;i<k-1;i++){
        t1=t1->next;
    }
    while(t1->next->next!=NULL){
        t1=t1->next;
        t2=t2->next;
    }
    t1=t2->next;
    t2->next=t1->next;
    free(t1);
}