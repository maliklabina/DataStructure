#include<iostream>
using namespace std;

int palindrome(int n){
        int rem,ans=0;
        while(n!=0){
        rem=n%10; 
        n/=10;
        ans=ans*10+rem;
        }
}



int main(){
    int num;
     cout<<"enter ";
     cin>>num;
     int val=palindrome(num);
        if(num==val){
            cout<<"is a palindrome ";
            }
        else
        cout<<"not a palindrome ";

return 0;
}