//prime numbers

#include<iostream>
using namespace std;

int main(){
    int n,flag=0;
    cout<<"Enter the number ";
    cin>>n;
    for(int i=2 ; i<n ; i++){
        if(n%i==0){
            cout<<"not prime ";
            flag=1;
        }
         break;
    }

    if(flag==0){
      cout<<"prime";
    }

return 0;
}