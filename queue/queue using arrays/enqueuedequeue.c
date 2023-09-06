#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int *arr;
    int front;
    int rear;
}typedef queue;
int isfull(struct queue *s1){
    if(s1->rear==s1->size-1)
    return 1;
    return 0;
}
int isempty(struct queue *s1){
    if(s1->front==s1->rear)
     return 1;
     return 0;
}
void enqueue(struct queue *s1,int value){
    if(isfull(s1))
    printf("queue overflow\n");
    else
    s1->rear++;
    s1->arr[s1->rear]=value;
}
void dequeue(struct queue *s1){
if(isempty(s1))
printf("queue underflow\n");
else
s1->front++;
}
 void printqueue(struct queue *ptr){
        for(int i = ptr->front+1 ;i < ptr->size ; i++){
       printf("%d\n",ptr->arr[i]);
        }
    }
int main(){
    queue *s1=(struct queue *)malloc(sizeof(struct queue));
    s1->size=10;
    s1->arr=(int *)malloc(s1->size*sizeof(int));
    s1->front=-1;
    s1->rear=-1;
enqueue(s1,12);
dequeue(s1);
printqueue(s1);
    return 0;
} 