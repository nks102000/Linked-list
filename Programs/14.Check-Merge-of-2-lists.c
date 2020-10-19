#include<stdio.h>

struct node* check_merge_of_2_list(struct node **st1,struct node **st2){
    struct node *temp1,*temp2;
    temp1=*st1;
    temp2=*st2;
    while(temp1!NULL){
        while(temp2!=NULL){
            if(temp1->data==temp2->data){
                return (temp1); 
            }
            temp2=temp2->next;
        }
        temp1=temp2->next;
    }
    return NULL;
} 