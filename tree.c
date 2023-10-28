#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node *create(){
struct node *newNode;
    int data, choice;
    newNode=(struct node *)malloc(sizeof(struct node));
    printf("Press 0 to Exit : ");
    printf("\nPress 1 for new node : ");
    printf("\nEnter the choice : ");
    scanf("%d",& choice);
    if(choice==0){
        return 0;
    }
    else{
        printf("\nEnter the data : ");
        scanf("%d", &data);
        newNode->data=data;
        printf("\nEnter the left child : ");
        newNode->left=create();
        printf("\nEnter the right child :");
        newNode->right = create();
        return newNode;
    }
};
void main(){
    struct node *root;
    root= create();
}