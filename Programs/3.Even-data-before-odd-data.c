#include<stdio.h>

//List all the even data in list before odd data list

struct node *exchangeEvenOddList(struct node **st1){
    //Inisialising start pointer of even and odd list
    struct node *oddlist=NULL,*evenlist=NULL;

    //Inisialising start pointer of even and odd list
    struct node *oddlistEnd=NULL,*evenlistEnd=NULL;

    struct node *t=*st1;
    if(*st1=NULL){
        return ;
    } 
    else{
        while(t!=NULL){
            if(t->data%2==0){
                //for even elements
                if(evenlist==NULL){
                    evenlist=t;
                    evenlistEnd=t;
                }
                else{
                    evenlistEnd->next=t;
                    evenlistEnd=t;
                }
            }
            else{
                //for odd elements
                if(oddlist==NULL){
                    oddlist=t;
                    oddlistEnd=t;
                }
                else{
                    oddlistEnd->next=t;
                    oddlistEnd=t;
                }
            }
            t=t->next;
        }
        evenlistEnd->next=oddlist;
        return *st1;
    }
}