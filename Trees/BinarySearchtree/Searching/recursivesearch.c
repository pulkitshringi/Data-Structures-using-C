#include <stdio.h>
#include <stdlib.h>
    struct tree{
        int data;
        struct tree *left;
        struct tree *right;
    };
    struct tree *create(int data){
      struct tree *p=(struct tree *)malloc(sizeof(struct tree));
      p->data=data;
      p->left=NULL;
      p->right=NULL;
      return p;
    }
    struct tree *search(struct tree *node,int key){
        if(node==NULL)
        return NULL;
        if(node->data==key)
            return node;
        if(node->data>key)
        return search(node->left,key);
        else
        return search(node->right,key);
    }
void inOrder(struct tree *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d\n",root->data);
        inOrder(root->right);
    }
}
    int main(){
    struct tree *s1 = create(5);
    struct tree *s2 = create(3);
    struct tree *s3 = create(6);
    struct tree *s4 = create(1);
    struct tree *s5 = create(7);

    s1->left=s2;
    s1->right=s3;
    s2->left=s4;
    s3->right=s5;
    struct tree *pp = search(s1,6);
    if(pp!=NULL)
    printf("%d\n",pp->data);
    else
    printf("Element not found.\n");
    return 0;
    }