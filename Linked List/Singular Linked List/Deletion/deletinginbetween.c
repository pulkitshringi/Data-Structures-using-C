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
struct link *deleteatmid(struct link *head,int index){
    struct link *p;
    struct link *ptr;
    p=head;
    ptr=head->next;
    for(int i = 0 ; i<index-1 && p->next!=NULL ; i++){
        p=p->next;
        ptr=ptr->next;
    }
    p->next=ptr->next;
    free(ptr);
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
  head=deleteatmid(head,2);
  traversal(head);
    return 0;
}