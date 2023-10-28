#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	
	cout<<"The value of a is : ";
	cin>>a;
	
	cout<<"The value of b is : ";
	cin>>b;
	
	c=b;
	b=a;
	a=c;
	
	
	cout<<"After swapping the vlaue of a is : "<<a<<endl;
	cout<<"After swapping the value of b is : "<<b<<endl;

}