#include<iostream>
using namespace std;

int main(){
int a[10],i,n;
int sum=0;
cout<<"Enter number of elements to store (Size of array is 10):";
cin>>n;
cout<<"Enter the elements to store in an array :";
for(i=0; i<n; i++){
    cin>>a[i];
}
    cout<<"\nElements entered are :";
for(i=0; i<n; i++){
    cout<<"\n"<<a[i];
}
for(i=0; i<n; i++){
    sum=sum+a[i];
    //cout<<"sum is " <<sum;
}
cout<<"\nsum of elements is " <<sum;
return 0;   
}