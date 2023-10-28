/*#include<stdio.h>

struct student{
    int rollno;
    float marks;
};
int main(){
int a=10;
int *p=&a;
//printf("%d",*(int *)p);         //typecasting void pointer
printf("%x",(float *)p);
printf("\n%f",*(float *)p);
float b=20.25;
float *q=&b;
printf("\n%f",*q);
void *r;                      //Void pointer
r=&a;


    struct student s1;
    s1.rollno=10;
    s1.marks=20;
    printf("\n%d",s1.rollno);
}
*/

#include<stdio.h>

struct student{
    int rollno;
    float marks;
};
int main(){
int a=10;
float b=20.55;
int *p=NULL;            //NULL pointer
int *q;              //wild pointer


    struct student s1;
    s1.rollno=10;
    s1.marks=20;
    printf("\n%d",s1.rollno);
}