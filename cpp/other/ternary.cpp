#include<iostream>
using namespace std;
  

// ?:
int main(){

int a,b;
cout<<"enter two numbers ";
cin>>a>>b;
int sum=a+b;
sum>0 ? cout<<"greater" : cout<<"smaller";    //if true it wil print first statement. else 2nd statement
return 0;                                      
}