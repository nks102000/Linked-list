#include<stdio.h>
#include <stdlib.h>



struct node
{
    int coff;
    int exp;
    struct node *next;
};

void creat_poly(struct node ** ,int c,int e);
void display_poly(struct node ** );

int main(){
    struct node *start = NULL;

    struct node *start1 = NULL;

     int t;

    int f=1;

    while(f){
    printf("\n MENU ");
    printf("\n 1. Enter An Element In Poly 1 ");
    printf("\n 2. Enter An Element In Poly 2 ");
    printf("\n 3. Exit ");
    scanf("%d",&t);
    int c,e;
    
    switch (t)
    {

    case 1:
        printf("\n Enter The Element Coff To Be Entered in Poly 1: ");
        scanf("%d",&c);
        printf("\n Enter The Element Exponent To Be Entered in Poly 1: ");
        scanf("%d",&e);
        creat_poly(&start1,c,e);
        break;
    case 2:
        printf("\n Enter The Element Coff To Be Entered in Poly 2: ");
        scanf("%d",&c);
        printf("\n Enter The Element Exponent To Be Entered in Poly 3: ");
        scanf("%d",&e);
        creat_poly(&start2,c,e);
        break;
    case 3:
        f=0;
        break;
    default:
        break;
    }
    }
}

void creat_poly(struct node **st ,int c,int e){
    
    struct node *temp;

    struct node *new1 = (struct node *)malloc(sizeof(struct node ));

    new1->coff=c;
    new1->exp=e;

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



void display_poly(struct node **st){

    if (*st == NULL){ 
      printf("\n Empty List"); 
      return ;
    }

    struct node*temp=*st;
        printf("Elements in LIST are:");

    while(temp!=NULL){
        printf("%dx^%d ",temp->coff,temp->exp);
        temp=temp->next;
        if(temp!=NULL)
            printf("+");
    }
}