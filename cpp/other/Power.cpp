//finding power

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"number   power";
    cin>>num1>>num2;
    int n=num1;
    for(int i=1; i<num2; i++){
        num1=num1*n;
    }
     cout<<num1;

return 0;
}