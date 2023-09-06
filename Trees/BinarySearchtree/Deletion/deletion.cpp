#include<iostream>
using namespace std;
struct node{
    int data;
    node *left , *right;
    node(int val){
        data = val;
        right  = left = nullptr;
    }
};
node *inPre(node *root){
    root = root->left;
    while(root->right != nullptr){
        root = root->right;
    }
    return root;
}
node *delete_node(node *root , int val){
    node *temp;
    if(root == nullptr){
        cout<<"Element not found"<<endl;    }
    else if(root->data > val){
        root->left  = delete_node(root->left , val);
    }
    else if(root->data < val){
        root->right = delete_node(root->right , val);
    }
    else{
        if(root->left != nullptr && root->right != nullptr){     ///This condition will true when the node have both left and right child node.
            temp = inPre(root);
            root->data = temp->data;
            root->left = delete_node(root->left , root->data);
        }
        else{     ///If the node have one child.
            temp = root;
           if(root->left == nullptr){
               root = root->right;
           }
           else{
               root  = root->left;
           }
        }
        delete(temp);
    }
    return root;
}
void inorder(node *root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()
{
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(20);
    root->right->right = new node(30);
    root->right->left = new node(15);
    inorder(root);
    delete_node(root , 15);cout<<endl;
    inorder(root);
    return 0;
}