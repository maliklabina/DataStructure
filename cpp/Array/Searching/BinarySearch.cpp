//Binary search
//array must be sorted
//Time Complexity - O(logn)

#include<iostream>
using namespace std;

BinarySearch(int arr[] , int n , int key){
    int low=0 , high=n-1 , mid;
    //int mid=(low+high)/2;

    while(low<=high){
        mid=(low+high)/2;
        //arr[mid]=key
        if (arr[mid]==key)
        return mid;
        //arr[mid]<key
        else if (arr[mid]<key)
        low=mid+1;
        //arr[mid]>key
        else 
         low=mid-1;
    }
    return -1;
}

int main(){
int arr[50];
int n;
cout<<"Enter number of elements to store ";
cin>>n;
cout<<endl<<"Enter array elements ";
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}
int key;
cout<<endl<<"Enter the element to search ";
cin>>key;

int num = BinarySearch(arr , n , key);

if(num != -1)
cout<<endl<<"Element present at position "<<num;

else
cout<<"Element not found ";
return 0;
}
