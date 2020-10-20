//Insert and display a value n number of times
#include <stdio.h>
#include <stdlib.h>

int t=-1;
int arr[30];

void push()
{
    int a;
    if(t==29)
    {
    printf("STACK is Full.\n");
    }
    printf("Enter element: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
        arr[++t]=a;
}

void pop()
{
    if(t == -1)
    {
        printf("\n\tSTACK is Empty.\n");
        exit(1);
    }
    t = t - arr[t] + 1;
    printf("\nDELETED ELEMENT IS %d\n",arr[t--]);
}

void peep()
{
    if(t == -1)
    {
        printf("\nUNDER FLOW");
        return;
    }
    printf("\nELEMENT AT THE TOP IS %d\n",arr[t]);

}

void display()
{
    int f=t;
    if (t == -1)
    {
        printf("STACK UNDER FLOW!\n");
        return;
    }
    else
    {
        printf("\nDatas are :\n");
        while (f != -1)
        {
            printf("%d->",arr[f]);
            f--;
        };
    }
}

int main() {
    int c,j=0;
    printf("\n\t\t MENU ");
    printf("\n[1] Using Push Function");
    printf("\n[2] Using Pop Function");
    printf("\n[3] Element present at the top of the Stack");
    printf("\n[4] Display");
    printf("\n[0] Exit\n");

l:
    printf("\nEnter your choice: ");
    scanf("%d",&c);
    switch (c) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 0:
            exit(0);
            
        default:
            printf("Wrong input try again !!\n");
            goto l;
            break;
    }
    
    printf("Do you want to continue?(1|0):");
    scanf("%d",&j);
    if(j==1)
        goto l;

    return 0;
}