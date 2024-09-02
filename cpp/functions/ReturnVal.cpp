//return value 

#include<iostream>
using namespace std;

int sum(int num1, int num2){
    int sum = num1 + num2;
    return sum;              //function returning int value
}
int main(){
int a,b,val;
cout<<"enter two numbers ";
cin>>a>>b;
val=sum(a,b);                    //storing value for further use
cout<<"sum is "<<val;
return 0;
}