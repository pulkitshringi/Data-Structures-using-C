#include <stdio.h>
#include <stdlib.h>
struct link{
int data;
struct link *next;
};
void traversal(struct link *head){
    struct link *ptr = head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct link *insertatend(struct link *head,int data){
    struct link *ptr;
    ptr=head;
    struct link *q;
    q=(struct link *)malloc(sizeof(struct link));
    do{
       ptr=ptr->next;
    }while(ptr->next!=head);
ptr->next=q;
q->next=head;
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
head->next=second;
second->data=20;
second->next=third;
third->data=30;
third->next=fourth;
fourth->data=50;
fourth->next=head;
head=insertatend(head,100);
      traversal(head);
    return 0;
}