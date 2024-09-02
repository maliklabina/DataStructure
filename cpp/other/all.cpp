#include<iostream>
using namespace std;

class numbers{
    public:
    int num1;
    int num2, sum;

numbers(int num1 , int num2 ){
this->num1 = num1;
this->num2 = num2;
}

//add(int num1 ,num2){ 
//sum = num1 + num2;
//return sum;
//}

};


int main(){
int a,b;
cout<<"Enter two numbers ";
cin>>a,b;
numbers obj(a,b);
cout<<obj.numbers;
//int var=obj.add();
//cout<<endl<<obj.add;
return 0;
}

