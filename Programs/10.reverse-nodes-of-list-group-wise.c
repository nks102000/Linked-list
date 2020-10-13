#include<stdio.h>

struct node* reverse_nodes_of_list_group_wise(struct node **st1){
    struct node *temp1 =NULL,*temp2=NULL,*current=*st;
    while(current!=NULL&& current->next!=NULL){
        if(temp1!=NULL){
            temp1->next->next=current->next;
        }
        temp1=current->next;
        current->next=current->next->next;
        temp1->next=current;
        if(temp2==NULL){
            temp2=temp1;
        }
        current=current->next;
    }
    return temp2;
}
