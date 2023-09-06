#include <stdio.h>
#include <stdlib.h>
struct link {
int data;
struct link *prev;
struct link *next;
};
void traversal(struct link *head){
    struct link *ptr = head;
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
struct link *insertionatend(struct link *head,int data){
    struct link *ptr = head;
    struct link *q = (struct link *)malloc(sizeof(struct link));
    while(ptr->next!=NULL)
    ptr=ptr->next;
    ptr->next=q;
    q->next=NULL;
    q->prev=ptr;
    q->data=data;
    return head;
}
int main(){
    struct link *head;
    struct link *second;
    struct link *third;
    struct link *fourth;
    head=(struct link *)malloc(sizeof(struct link));
    second=(struct link *)malloc(sizeof(struct link));
    third=(struct link *)malloc(sizeof(struct link));
    fourth=(struct link *)malloc(sizeof(struct link));
    head->data=10;
    head->prev=NULL;
    head->next=second;
    second->data=20;
    second->prev=head;
    second->next=third;
    third->data=30;
    third->prev=second;
    third->next=fourth;
    fourth->data=40;
    fourth->prev=third;
    fourth->next=NULL;
    head=insertionatend(head,50);
    traversal(head);
    return 0;
}