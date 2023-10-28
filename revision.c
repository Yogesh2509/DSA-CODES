//  #include<stdio.h>
//  int main(){
//     int a=10;
// struct student{
// 	char n;
//     char name[100];
//     float marks;
// };
// struct student s1;
// struct student s2;
// strcpy(s1.name, "Yogesh");
// s1.marks=90.88;
// s2.n='o';
// s2.marks=99.45;
// printf("%s %.2f",s1.name,s1.marks);
// printf("\n%c %.2f",s2.name,s2.marks);
// printf("\n%d",&s1);
// printf("\n%d",&s1.name);
// printf("\n%d",&s1.marks);
// printf("\n%d",&s2);
// printf("\n%d",&s2.name);
// printf("\n%d",&s2.marks);
// }

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
    void countNode(struct node *head){                //counting the number of nodes
    struct node *temp;
    int count=0;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    printf("Total nodes are %d",count);
    } 
void traversing(struct node *head){                 //traversing the value 
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("\nValue is %d",temp->data);
        temp=temp->next;
    }
}
void searching(struct node *head){               //searching the element in the nodes
    struct node *temp=head;
    int value,found=0;
    printf("\nEnter the number to be searched : ");
    scanf("%d",&value);
    while(temp!=NULL){
        if(temp->data==value){
            found=1;
            break;
    }
    temp=temp->next;
}
    if(found==0){
        printf("Element not found");
    }
    else{
        printf("Element found");
    }
    }

int main(){
    struct node* first = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* forth = (struct node*)malloc(sizeof(struct node));
    struct node* fifth= (struct node*)malloc(sizeof(struct node));
    struct node* sixth = (struct node*)malloc(sizeof(struct node));
    first->data=10;
    first->next=second;
    second->data=20;
    second-> next=third;
    third->data=30;
    third->next=forth;
    forth->data=40;
    forth->next=fifth;
    fifth->data=50;
    fifth->next=sixth;
    sixth->data=60;
    sixth->next=NULL;
    countNode(first);
    traversing(first);
    searching(first);
}