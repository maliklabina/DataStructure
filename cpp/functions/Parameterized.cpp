//parameterized 

#include<iostream>
using namespace std;

void first(int a , int b){     //passing some value
int sum;
sum = a + b;
cout<<"first " <<sum <<endl;
}

void second(){                //without passing any value
cout<<"second";
}

int main(){
int int1,int2;
cout<<"Enter the numbers to add ";
cin>>int1>>int2;
first(int1,int2);    //calling the fun and passing values
second();             
return 0;
}