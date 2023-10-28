#include<iostream>
using namespace std;
int n=5;
int queue[5];
int front=-1, rear=-1;
void enqueue( int val){
    if (rear==n-1){
        cout<<("Overflow");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=val;
    }else{
        rear++;
        queue[rear] = val;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        cout<<"underflow"<<endl;
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
        cout<<"Deleted element is "<<queue[front]<<endl;
        front++;
    }
}
void display(){
    for(int i=front;i<rear+1;i++){
        cout<<queue[i]<<endl;
    }
}
void peak(){
    cout<<"Peak element is "<<queue[front]<<endl;
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    display();
    peak();

} 