//linear search

//Time complexity
//best case o(1)
//average case o(n)
//worst case o(n)

//Space complexity==o(1)

#include<iostream>
using namespace std;

int findVal(int a[] , int value){
    int temp = -1;
    for(int i=0 ; i<5 ; i++){
        if(value == a[i]){
            return i;    
             }
    }
    return -1;
}


int main(){

    int arr[5];
    int val;

    cout<<"Enter 5 array elements : ";
    for(int i=0 ; i<5 ; i++){
        cin>>arr[i];
    }

    cout<<"Enter element to search : ";
    cin>>val;
    
    int ans=findVal(arr,val);
    if(ans!=-1)
        cout<<"Element found at location "<<ans+1;
    else
        cout<<"Element not found";

return (0);
}