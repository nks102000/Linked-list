#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void sorted_insert(struct node **st,int data1){
    struct node *NewNode=(struct node*)malloc(sizeof(struct node));
    NewNode->data=data1;
    if(*st==NULL || (*st)->data>=NewNode->data){
        NewNode->next=*st;
        *st=NewNode;
        return;
    }
    else{
        struct node *temp=*st;
        while(temp->next!=NULL && temp->next->data<NewNode->data){
            temp=temp->next;
        }
        NewNode->next=temp->next;
        temp->next=NewNode;
    }
}