
#include <stdio.h>
#include <stdlib.h>
struct cirqueue{
    int size;
int front;
int rear;
int *arr;
};
int isfull(struct cirqueue *s1){
    if((s1->rear+1)%s1->size==s1->front)
    return 1;
    return 0;
}
int isempty(struct cirqueue *s1){
  if(s1->rear==s1->front)
  return 1;
  return 0;
}
void enqueue(struct cirqueue *s1,int data){
  if(isfull(s1)){
    printf("Queue Overflow\n");
    return;
  }
s1->rear=(s1->rear+1)%s1->size;
  s1->arr[s1->rear]=data;
}
void dequeue(struct cirqueue *s1){
 if(isempty(s1)){
    printf("Queue Underflow\n");
    return;
 }
    s1->front=(s1->front+1)%s1->size;
}
 void print(struct cirqueue *s1){
    for(int i = s1->front+1;i!=s1->rear;(i+1)%s1->size){
        printf("%d ",s1->arr[i]);
    }
 }
int main(){
   struct cirqueue *s1=(struct cirqueue *)malloc(sizeof(struct cirqueue));
s1->front=0;
s1->rear=0;
s1->size=5;
s1->arr=(int *)malloc(s1->size*sizeof(int));
enqueue(s1,10);
enqueue(s1,69);
enqueue(s1,42);
enqueue(s1,69);
dequeue(s1);
dequeue(s1);
print(s1);

    return 0;
}