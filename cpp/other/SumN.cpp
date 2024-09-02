//sum of n natural numbers

#include<iostream>
using namespace std;

int main(){
   int num1,num2,sum=0;
   cout<<"Enter range";
   cin>>num1>>num2;

   for(int i=num1 ; i<=num2 ; i++){
    sum=sum+i;
   }

cout<<sum;
return 0;
}