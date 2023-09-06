#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int * arr;
};
int isempty(struct stack *s1){
    if(s1->top==-1)
    return 1;
    return 0;
}
int isfull(struct stack *s1){
    if(s1->top==s1->size-1)
    return 1;
    return 0;
}
int main(){
    struct stack *s1;
    s1=(struct stack *)malloc(sizeof(struct stack));
    s1->size=80;
    s1->top=-1;
    s1->arr=(int *)malloc(s1->size*sizeof(int));
     if(isempty(s1))
     printf("is empty\n");
     else 
     printf("Not empty\n");
     if(isfull(s1))
     printf("is full\n");
     else
     printf("not full\n");
     return 0;
}