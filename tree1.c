#include<stdio.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->right=NULL;
    node->left=NULL;
    return (node);
}
int height(struct node *node){
    if(node==NULL){
        return 0;
    }
    else{
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight){
            return(lheight+1);
        }
        else{
            return(rheight+1);
        }
    }
}
int size(struct node *root){
    if(root == NULL) {
        return 0;
}
    else{
        return 1+size(root->left)+size(root->right);
    }
}
int minValue(struct node *root){
    struct node* current = root;
    while(current->left!=NULL){
        current = current->left;
    }
    return current->data;
}
int maxValue(struct node *root){
    struct node* current = root;
    while(current->right!=NULL){
        current = current->right;
    }
    return current->data;
}
int main(){
    struct node *root = newNode(5);
    root->left=newNode(5);
    root->right=newNode(10);
    root->left->left=newNode(4);
    root->left->right=newNode(7);
    root->right->left=newNode(9);
    root->right->right=newNode(11);
    root->left->left->left=newNode(2);
    printf("height of the tree is %d",height(root));
    printf("\nsize of tree is %d",size(root));
    printf("\nminimum value in the tree is %d",minValue(root));
    printf("\nmaximum value in the tree is %d",maxValue(root));
}