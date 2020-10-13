//1905622 - NITISH KUMAR SONTHALIA
//Linked list
#include<stdio.h>
#include <stdlib.h>



struct node
{
    int data;
    struct node *next;
};

void creat_list(struct node ** ,int n);
void display_list(struct node ** );
void del_last_occurance(struct node **,int n);

int main(){
    struct node *start=NULL;
    creat_list(&start,1);
    creat_list(&start,2);
    creat_list(&start,3);
    creat_list(&start,4);
    creat_list(&start,5);
    creat_list(&start,4);
    creat_list(&start,6);
    creat_list(&start,7);
    creat_list(&start,4);
    creat_list(&start,9);
    display_list(&start);
    del_last_occurance(&start,4);
    display_list(&start);
    return 0;
}

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



void display_list(struct node **st){

    if (*st == NULL){ 
      printf("\n Empty List"); 
      return ;
    }

    struct node*temp=*st;
        printf("Elements in LIST are:");

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


void del_last_occurance(struct node **st,int n){
    struct node *temp,*t1,*t2;
    t1=t2=NULL;
    temp=*st;
    while(temp->next!=NULL){
        if(temp->data==n){
        t2=temp;
    }
    t1=temp;
    temp=temp->next;
    }
    t1->next=t2->next;
    free(t2);
}