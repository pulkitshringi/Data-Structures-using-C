#include <stdio.h>
#include <stdlib.h>
struct stacklink{
int data;
struct stacklink *next;
};
int isempty(struct stacklink *s1){
    if(s1==NULL)
    return 1;
    return 0;
}
struct stacklink *push(struct stacklink *top,int value){
    struct stacklink *ptr=(struct stacklink *)malloc(sizeof(struct stacklink));
    if(ptr==NULL)
    printf("stack overflow\n");
    else
    ptr->data=value;
    ptr->next=top;
    return ptr;
}
void print(struct stacklink *top){
   struct stacklink *ptr = top;
   while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
   }
}
struct stacklink *pop(struct stacklink *top){
    struct stacklink *ptr=top;
    if(isempty(top))
    printf("stack underflow\n");
    else
    top=top->next;
    free(ptr);
    return top;
}
int peek(struct stacklink *top,int pos){
    struct stacklink *ptr=top;
    for(int i =0;i<pos-1 && ptr!=NULL;i++)
        ptr=ptr->next;
        return ptr->data;
}
int stackbottom(struct stacklink *top){
    struct stacklink *ptr = top;
    while(ptr->next!=NULL)
    ptr=ptr->next;
    return ptr->data;
}
int main(){
    struct stacklink *top=NULL;
    top=push(top,12);
    top=push(top,77);
      top=push(top,45);
    top=push(top,88);
      top=push(top,99);
    top=push(top,100);
    top=pop(top);
    top=pop(top);
    print(top);
   // printf("Element at %d position is : %d\n",2,peek(top,2));
   for(int i =1;i<3;i++){
    printf("element at %d position : %d\n",i,peek(top,i));
   }
    printf("[StackTop] Topmost element : %d\n",top->data);
    printf("[StackBottom] Bottommost element : %d\n",stackbottom(top));
    return 0;
}