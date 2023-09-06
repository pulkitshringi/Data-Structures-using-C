#include <stdio.h>
#include <stdlib.h>
struct stack{
char data;
struct stack *next;
};
struct stack *push(struct stack *top,int data){
    struct stack *s1=(struct stack *)malloc(sizeof(struct stack));
    s1->data=data;
    s1->next=top;
    return s1;
}
struct stack *pop(struct stack *top){
    struct stack *s1=top;
    top=top->next;
    free(s1);
    return top;
}
char popval(struct stack *top){
    return top->data;
}
int precedence(char d){
    if(d=='+' || d=='-')
    return 1;
    if(d=='*' || d=='/')
    return 2;
    else
    return 0;
}
int isoperator(char d){
    if(d=='+' || d=='-' || d=='/' || d=='*')
        return 1;
        return 0;
}
void infixtoprefix(struct stack *top,char arr[],int n){
    char arr2[n];
    int j=0;
for(int i =0;i<n;i++){
    if(!isoperator(arr[i])){
       arr2[j]=arr[i];
       j++;
    }
    else{
        if(precedence(arr[i])>precedence(top->data))
        top=push(top,arr[i]);
        else{
            arr2[j]=popval(top);
            top=pop(top);
            j++;
        }
        
    }
}while(top!=NULL){
    arr2[j]=top->data;
    top=top->next;
    j++;
}
arr2[j]='\0';
for(int i =0;arr2[i]!='\0';i++){
    printf("%c",arr2[i]);
}
}
int main(){
    struct stack *top=NULL;
    int n;
    scanf("%d",&n);
    char arr[n];
    for(int i =0;i<n;i++){
        scanf("%c",&arr[i]);
    }
    infixtoprefix(top,arr,n);
    return 0;
}