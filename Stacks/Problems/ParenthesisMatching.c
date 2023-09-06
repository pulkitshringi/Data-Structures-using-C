#include <stdio.h>
#include <stdlib.h> 
struct stack{
char data;
struct stack *next;
};
int isempty(struct stack *top){
    if(top==NULL)
    return 1;
    return 0;
}
struct stack *push(struct stack *top,char data){
    struct stack *p=(struct stack *)malloc(sizeof(struct stack));
    p->data=data;
    p->next=top;
    return p;
}
struct stack *pop(struct stack *top){
  if(isempty(top)){
    printf("Unbalanced Equation\n");
    return top;
  }
  struct stack *p=top;
  top=top->next;
  free(p);
  return top;
}
int paranthesismatch(struct stack *top,char arr[],int n){
 for(int i =0;i<n;i++){
        if(arr[i]=='(')
        top=push(top,arr[i]);
        else if(arr[i]==')'){
            if(isempty(top))
                return 0;
        top=pop(top);
        }
}    
if(isempty(top))
  return 1;
return 0;
}
int main(){
    struct stack *top=NULL;
    int n;
    scanf("%d",&n);
    char arr[n];
    for(int i =0;i<n;i++){
      scanf("%c",&arr[i]);
    }
    if(paranthesismatch(top,arr,n))
    printf("Balanced Equation\n");
    else
    printf("Unbalanced Equation\n");

    return 0;
    }