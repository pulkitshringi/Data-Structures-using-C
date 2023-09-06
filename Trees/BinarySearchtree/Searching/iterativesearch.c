#include <stdio.h>
#include <stdlib.h>
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *create(int data){
    struct tree *p = (struct tree *)malloc(sizeof(struct tree));
    p->data =data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
struct tree *iterativesearch(struct tree *root,int key){
    while(root!=NULL){
        if(root->data==key)
        return root;
        if(root->data<key)
        root=root->right;
        else
        root=root->left;
    }return NULL; 
    }
    struct tree *insert(struct tree *root,int data){
        struct tree *ptr=(struct tree *)malloc(sizeof(struct tree));
        struct tree *pp=root;
        while(pp!=NULL){
            if()
        }
    }
int main(){
    struct tree *root;
    struct tree *s2;
    struct tree *s3;
    struct tree *s4;
    struct tree *s5;
    root=create(3);
    s2=create(2);
    s3=create(1);
    s4=create(4);
    s5=create(5);
    root->left=s2;
    s2->left=s3;
    root->right=s4;
    s4->right=s5;
    struct tree *pp = iterativesearch(root,50);
    if(pp!=NULL)
        printf("found : %d\n",pp->data);
        else
        printf("Not Found.\n");
    return 0;
}