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
struct link *insertionatmid(struct link *head,int index,int data){
    struct link *ptr=head;
    struct link *q=(struct link *)malloc(sizeof(struct link));
    for(int i = 0;i<index-1;i++){
        ptr=ptr->next;
    }
        q->next=ptr->next;
        ptr->next=q;
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
    head=insertionatmid(head,4,50);
    traversal(head);
    return 0;
}