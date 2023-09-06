#include <stdio.h>
#include <stdlib.h>
struct stack{
int size;
int top;
int *arr;
};
int isfull(struct stack *s1){
    if(s1->top==s1->size-1)
    return 1;
    return 0;
}
int isempty(struct stack *s1){
    if(s1->top==-1)
    return 1;
    return 0;
}
void pop(struct stack *s1){
    if(isempty(s1))
    printf("is empty\n");
    else
      s1->top--;
}
void push(struct stack *s1,int value){
    if(isfull(s1))
   printf("Stack Overflow bitch\n");
   else{
    s1->top++;
    s1->arr[s1->top]=value;
   }
}
int peek(struct stack *s1,int position){
    if(s1->top-position+1<0)
    return -1;
    return(s1->arr[s1->top-position+1]);
}
int main(){
    struct stack *s1;
    s1=(struct stack *)malloc(sizeof(struct stack));
    s1->top=-1;
    s1->size=3;
    s1->arr=(int *)malloc(s1->size*sizeof(int));
    push(s1,23);
    pop(s1);
    push(s1,44);
    push(s1,77);
    push(s1,199); 
      pop(s1);
    push(s1,200);
   for(int i =0;i<s1->size;i++){
    printf("%d\n",s1->arr[i]);
   }
   for (int position = 1;s1->top-position+1>=0;position++){
    printf("Element at %d position is %d.\n",position,peek(s1,position));
   }
   printf("[StackTop] The topmost element of the stack : %d\n",s1->arr[s1->top]);
   printf("[StackBottom] The bottommost element of the stack : %d\n",s1->arr[0]);
}