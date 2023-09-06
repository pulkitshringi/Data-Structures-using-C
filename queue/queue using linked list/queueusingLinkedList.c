#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
    struct queue *rear=NULL;
    struct queue *front=NULL;
    int isfull(){
        struct queue *s1=(struct queue *)malloc(sizeof(struct queue));
        if(s1==NULL)
        return 1;
        return 0;
    }
void enqueue(int data){
    struct queue *ptr=(struct queue *)malloc(sizeof(struct queue));
    ptr->data=data;
    if(front==NULL){
        front=rear=ptr;
    }
    else if(isfull()){
        printf("Can't\n");
       return;
    }
    else{
        rear->next=ptr;
        ptr->next=NULL;
       rear=ptr;
    }
}
int dequeue(){
    if(front==NULL){
        printf("Queue is Empty.\n");
        return -1;
    }
    else{
        struct queue *temp=front;
        front=front->next;
        int temp2 = temp->data;
        free(temp);
        return temp2;
    }
}
    void print(){
        struct queue *ptr=front;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
int main(){
  enqueue(12);
       enqueue(23);
          enqueue(44);
         int temp =dequeue();
       printf("Dequed data : %d\n",temp);
    print();
    return 0;
}