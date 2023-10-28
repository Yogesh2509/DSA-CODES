#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    if(a > b){
        printf("\n%d is greater than %d\n", a, b);
        }else{
            printf("\n%d is not greater than %d\n", a, b);
            }
            return 0;
            }
            