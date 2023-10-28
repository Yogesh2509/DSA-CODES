#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
struct node *top=NULL;
void push(int x){
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode-> data=x;
    newnode-> next=top;
    top=newnode;
}
void pop(){
     if (top== NULL) {
    printf("Underflow");

}
    struct node* temp;
    temp=top;
    top=top->next;
    printf("Popped element is %d",temp->data);
    free(temp);
}

void peak(){
    if (top == NULL ){
        printf("Underflow");
    }
    struct node* temp;
    temp=top;
    printf("\nPeak element is %d",temp->data);
}

void size(){
    struct node* temp;
    temp=top;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    printf("\nSize is %d",count);
}

void display(){
    struct node * temp;
    temp = top ;  //initialising the pointer to point at first element of linked list
    if(temp==NULL){
        printf("Empty stack");
    }
    else{
        while (temp!= NULL) {
            printf("\n%d",temp->data);
            temp=temp->next;
        }
    }
}
int main(){
push(10);
push(20);
push(30);
push(40);
pop();
peak();
size();
display();                              
}