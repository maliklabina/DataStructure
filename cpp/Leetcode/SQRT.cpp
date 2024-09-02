//Finding the closest squareroot number

#include<iostream>
using namespace std;

int sqrt(int n){
    int i=1;
    while(i*i<=n){
            if(i*i==n){
              return i;
            }
            i++;
    }
    return i-1;
}


int main(){
    int n;
    cout<<"enter ";
    cin>>n; 
    int final=sqrt(n);
    cout<<final;
return 0;
}