#include <stdio.h>
#include <stdlib.h>
struct link {
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
struct link *deleteatfirst(struct link *head){
    struct link *ptr = head;
    struct link *q = head;
    do{
        ptr=ptr->next;
    }while(ptr->next!=head);
    head=head->next;
    ptr->next=head;
     free (q);
     return head;
}
int main(){
    struct link *head;
    struct link *second;
    struct link *third;
    struct link *fourth;
    head=(struct link*)malloc(sizeof(struct link));
    second=(struct link*)malloc(sizeof(struct link));
    third=(struct link*)malloc(sizeof(struct link));
    fourth=(struct link*)malloc(sizeof(struct link));
    head->data=10;
    second->data=20;
    third->data=30;
    fourth->data=40;
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=head;
    head = deleteatfirst(head);
    traversal(head);
    return 0;
}