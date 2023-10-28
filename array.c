//insertion in array

// #include<stdio.h>
// int main() {
//     int position,i;
//     int arr[10]={1,2,3,4,5,6};
//     printf("Enter the position : ");
//     scanf("%d",&position);
//     for(i=4;i>=position-1;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[position-1]=3;
// for(i=0;i<5;i++){
//     printf("%d",arr[i]);
// }
// }
       
       //deletion of the array

#include<stdio.h>
int main(){

    int arr[50],i,n,pos;
    printf("Enter the numbers of element of array : ");
    scanf("%d",&n);
     printf("Enter the element : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the position you want to delete : ");
    scanf("%d",&pos);
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("\nFinal array is : ");
    for(i=0;i<n-1;i++){
        printf("\n%d",arr[i]);
    }
}