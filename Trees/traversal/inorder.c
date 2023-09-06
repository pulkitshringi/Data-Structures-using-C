#include <stdio.h>
#include <stdlib.h>
struct tree{
int data;
struct tree *left;
struct tree *right;
};
struct tree *createnode(int data){
    struct tree *p;
    p=(struct tree *)malloc(sizeof(struct tree));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void inOrder(struct tree *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d\n",root->data);
        inOrder(root->right);
    }
}
int main(){
    struct tree *s1;
    struct tree *s2;
    struct tree *s3;
    s1=createnode(12);
    s2=createnode(24);
    s3=createnode(44);
    struct tree *s5=createnode(60);
    s1->left=s2;
    s1->right=s3;
    s2->left=s5;
    inOrder(s1);
    return 0;
}