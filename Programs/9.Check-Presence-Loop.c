#include<stdio.h>

int check_Loop(struct node **st){
    struct node *slow,*fast;
    slow=fast=*st;
    while(fast&&fast->next)(
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast){
            printf("\n List contains a loop");
            return 1;
        }
    }
    printf("\n List doesn't contains a loop");
    return 0;
}