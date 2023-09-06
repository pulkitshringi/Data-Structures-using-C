#include <stdio.h>
#include <stdlib.h>
struct tree{
int data;
struct tree *left;
struct tree *right;
};
struct tree *create(int data){
struct tree *p;
p=(struct tree *)malloc(sizeof(struct tree));
p->data=data;
p->left=NULL;
p->right=NULL;
return p;
};
int main(){
    // Slow method but works.
/* struct tree *p=(struct tree *)malloc(sizeof(struct tree));
p->data=12;
p->left=NULL;
p->right=NULL;
struct tree *q=(struct tree *)malloc(sizeof(struct tree));
q->data=15;
q->left=NULL;
q->right=NULL;
struct tree *r=(struct tree *)malloc(sizeof(struct tree));
r->data=17;
r->left=NULL;
r->right=NULL; */
struct tree *p = create(12);                // Recommanded Method.  :):):)
struct tree *q = create(15);
struct tree *r = create(17);
p->left=q;
p->right=r;
    return 0;
}