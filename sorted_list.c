// 6210450024 Kanta Kongwattananon
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_list(struct node *head)
{   struct node *tmp;
    for (tmp=head; tmp; tmp = tmp->next)
    printf("%d\n", tmp->data);
}

void main(){
    int num;
    struct node *head, *tmp;
    scanf("%d", &num);
    if(num != -1){
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        while(1){
            scanf(" %d", &num);
            if(num == -1)
                break;
            if(head->data > num){
                struct node **head_ref = &head, *new = (struct node *)malloc(sizeof(struct node));
                new->data = num;
                new->next = *head_ref;
                *head_ref = new;
            }
            else{
                tmp = head;
                struct node *new = (struct node *)malloc(sizeof(struct node));
                new->data = num;
                while(1){
                    if(tmp->next == NULL){
                        new->next = NULL;
                        tmp->next = new;
                        break;
                    }
                    else if((tmp->next)->data > num){
                        new->next = tmp->next;
                        tmp->next = new;
                        break;
                    }
                    else
                        tmp = tmp->next;
                }
            }
        }
    print_list(head);
    }
}