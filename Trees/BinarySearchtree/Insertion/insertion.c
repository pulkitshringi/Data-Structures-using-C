#include <stdio.h>
#include <stdlib.h>
struct tree{
int data;
struct tree *left;
struct tree *right;
};
    struct tree *root;
struct tree *create(int data){
    struct tree *s1=(struct tree *)malloc(sizeof(struct tree));
    s1->data=data;
     s1->left=NULL;
     s1->right=NULL;
     return s1;
}
void insert(int data){
    struct tree *roo=root;
    struct tree *pre=NULL;
    struct tree *new=create(data);
    if(roo==NULL){
        struct tree *s1=new;
        root=s1;
        return;
    }
    while(roo!=NULL){
        pre=roo;
    if(roo->data>data){
      roo=roo->left; 
    }
    else 
    roo=roo->right;
}
if(pre->data>data)
pre->left=new;
else
pre->right=new;
}
void inorder(struct tree *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main(){
    root=NULL;
    insert(12);
    insert(24);
    insert(8);
inorder(root);
    return 0;
}