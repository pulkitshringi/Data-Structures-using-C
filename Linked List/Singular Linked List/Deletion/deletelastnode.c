#include <stdio.h>
#include <stdlib.h>
struct link {
int data;
struct link *next;
};
void traversal(struct link *head){
  struct link *ptr = head;
  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
struct link *deletelastnode(struct link *head){
    struct link *p;
    struct link *q;
    p=head;
    q=head->next;
    while(q->next!=NULL){
      p=p->next;
      q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main(){
    struct link *head;
    struct link *second;
    struct link *third;
    struct link *fourth;
   head = (struct link *)malloc(sizeof(struct link));
   second = (struct link *)malloc(sizeof(struct link));
   third = (struct link *)malloc(sizeof(struct link));
   fourth = (struct link *)malloc(sizeof(struct link));
  head->data=44;
  head->next=second;
  second->data=55;
  second->next=third;
  third->data=66;
  third->next=fourth;
  fourth->data=77;
  fourth->next=NULL;
  head=deletelastnode(head);
  traversal(head);
    return 0;
}