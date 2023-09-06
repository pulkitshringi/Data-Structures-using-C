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
void insertatmid(struct link *head,int data,int index){
    struct link *ptr;
    ptr=(struct link *)malloc(sizeof(struct link));
    struct link *p;
    p=head;
 for(int i = 0;i<index-1;i++){
  p=p->next;
 }
 ptr->next=p->next;
 p->next=ptr;
    ptr->data=data;
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
  insertatmid(head,99,3);
  traversal(head);
    return 0;
}