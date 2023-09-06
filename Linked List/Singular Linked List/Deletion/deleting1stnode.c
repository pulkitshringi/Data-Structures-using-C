#include <stdio.h>
#include <stdlib.h>
struct link {
int data;
struct link *next;
};
 struct link *head;
void traversal(){
  struct link *ptr = head;
  while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
  }
}
void deleting1stnode(){
    struct link *ptr;
    ptr=head;
    head=head->next;
    free(ptr);
}
int main(){
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
  deleting1stnode();
  traversal();
    return 0;
}