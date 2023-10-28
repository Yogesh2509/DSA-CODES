//Deletion of an element in an array

#include<iostream>
using namespace std;
int main(){

    int arr[50],i,n,pos;
    cout<<"Enter the numbers of element of array : ";
    cin>>n;
     cout<<"Enter the element : ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position you want to delete : ";
    cin>>pos;
    cout<<endl<<"So the array is : ";
    for(i=0;i<n;i++){
        cout<< arr[i];
    }
    for(i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
        cout<<endl<<"Final array after the removal is : ";
    for(i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}