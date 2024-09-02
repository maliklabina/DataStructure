#include<iostream>
using namespace std;

bool power(int n){
    if(n<1)
        cout<<"no";
        return 0;
    
        
    while(n!=1){
        if(n%2==1)
            cout<<"this";
            return 0;
            //cout<<"this";
        
        n=n/2;
    }
    return 1;
}

int main(){
    int num;
    cin>>num;
    power(num);
    return 0;
}