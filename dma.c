#include<stdio.h>



struct student{
   int rollno;
   float marks;
};

int main(){
    //void *ptr=NULL;
    void *ptr=(int*)calloc(5,4);                   //5 memory block of 4          or yha se hme pehle vale block ka address milega
                                                    //calloc - contiguous memory alloctaion (jab 1 sath memory chahiye ho)
                                                     //heap memory ko access krne ka eak matra tarika hai pointer k through......
    free(ptr);                                        //after this ptr will become dangling pointer 


    void *ptr=(int *)malloc(5);                        //malloc agr simple ek he value store krne hai jaise int, float tow malloc use krte hai.....

} 
