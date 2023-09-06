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
      traversal(head);
    return 0;
}