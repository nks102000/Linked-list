#include<stdio.h>
#include<math.h>

//Add two numbers stored in 2 different list in a 3rd one.

struct node *addlistWrapper(struct node **st1,struct node **st2,int *carry,struct node **result){
    int l1=0,l2=0,diff=0;
    struct node *temp=*st1;
    while(temp){
        temp=temp->next;
        l1++;
    }
    temp=*st2;
    while(temp){
        temp=temp->next;
        l2++;
    }
    if(l1<l2){
        temp=st1;
        st1=st2;
        st2=temp;
    }
    diff=abs(l1-l2);
    temp=*st1;
    while(diff--){
        temp=temp->next;
    }
    addlist(&temp,st2,carry,result);
    diff=abs(l1-l2);
    addRemainingNumbers(st1,carry,result,diff);
    if(*carry){
        struct node *new1 = (struct node *)malloc(sizeof(struct node));
        new1->data=*carry;
        new1->next=*result;
        *result=new1;
    }
    return;
}
void addlist(struct node **st1,struct node **st2,int *carry,struct node **result){
    int sum=0;
    if(!*st1){
        return;
    }
    //Going to end of both the list
    addlist((*st1)->next,(*st2)->next,carry,result);
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    sum=(*st1)->data+(*st2)->data+*carry;
    *carry=sum/10;
    sum=sum%10;
    new1->data=sum;
    new1->next=*result;
    result=new1;
    return;
}
void addRemainingNumbers(struct node **st1,int *carry,struct node **result,int diff){
    int sum=0;
    if(!*st1 || diff==0){
        return;
    }
    addRemainingNumbers((*st1)->next,carry,result,diff-1);
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    sum=(*st1)->data+*carry;
    *carry=sum/10;
    sum=sum%10;
    new1->data=sum;
    new1->next=*result;
    result=new1;
    return;
}