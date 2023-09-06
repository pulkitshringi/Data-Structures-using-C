#include <stdio.h>
#include <stdlib.h>
struct queue{
int size;
int *arr;
int front;
int rear;
};
int isfull(struct queue *ptr){
    if(ptr->rear>=ptr->size-1)
    return 1;
    return 0;
}
void enqueue(struct queue *ptr,int value){
  if(isfull(ptr))
  printf("queue OVerflow\n");
      else
      ptr->rear++;
      ptr->arr[ptr->rear]=value;
    }
    void printqueue(struct queue *ptr){
        for(int i = ptr->front+1 ;i < ptr->rear+1 ; i++){
       printf("%d\n",ptr->arr[i]);
        }
    }
int main(){
struct queue *q;
q=(struct queue *)malloc(sizeof(struct queue));
q->size=3;
q->front=-1;
q->rear=-1;
q->arr=(int *)malloc(q->size*sizeof(int));
enqueue(q,3);
enqueue(q,4);
printqueue(q);
    return 0;
}