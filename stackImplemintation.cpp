#include<stdio.h>
  int maxSize=5;
   int stack[5];
    int top= -1;
void push(){
    int val;
    if(top==maxSize){
        printf("\nStack Overflow");
    }
    else{
        printf("Enter the value : ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void display(){
    if(top==-1){
        printf("The Stack is empty\n");
    }
    else{
    for(int i=top;i>=0;i--){
    printf("\nElement %d is %d",i,stack[i]);
        }
    }
}
int pop() {
    if (top == - 1){
        printf ("Underflow \n");
    }
    else{
        printf("\nPopped element: %d ",stack[top] );
    }
}
void peak(){
    if(top==-1){
        printf("Underflow");
    }
    else{
        printf("\nPeak element is %d", stack[top]);
    }
}
int main(){
push();
push();
push();
pop();
display();
peak();

}