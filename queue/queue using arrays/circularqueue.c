#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int *arr;
    int front;
    int rear;
};
int isempty(struct queue *s1){
    if(s1->front==s1->rear)
    return 1;
    return 0;
}
int isfull(struct queue *s1){
    if(s1->rear+1%s1->size==s1->front)
    return 1;
    return 0;
}
void enqueue(struct queue *s1,int value){
    if(isfull(s1))
    printf("queue overflow\n");
    else{
        s1->rear=s1->rear+1%s1->size;     // same thing
        s1->arr[s1->rear]=value;
    }
}
void dequeue(struct queue *s1){
    if(isempty(s1))
    printf("queue underflow\n");
    else{
        s1->front++%s1->size;  // same thing.
    }
}
int main(){
    struct queue *s1=(struct queue *)malloc(sizeof(struct queue));
    s1->size=10;
    s1->front=s1->rear=0;  // necessary for circual queue. (0th position becomes empty.)
    s1->arr=(int *)malloc(s1->size*sizeof(int));
       enqueue(s1,23);
       dequeue(s1);
    return 0;
}