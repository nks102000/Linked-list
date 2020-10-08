#include<stdio.h>

//Find the sqrt(n)th term where n is the total number of terms (not known).

struct node *sqrtNode(struct node **st1){
    struct node *temp1;
    temp1=*st1;
    int i=1,j=1;
    for(;*st1!=NULL;*st1=(*st1)->next){
        if(i==j*j){
            if(temp1==NULL){
                temp1=*st;
            }
            else{
                temp1=temp1->next;
            }
            j++;
        }
        i++;
    }
    return temp1;
} 