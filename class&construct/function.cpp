//creating a method in a class and calling the constructor

#include<iostream>
using namespace std;

class student{
    public:
        int num1,num2,num3;

student(int num1, int num2, int num3){   //constructor name should be same as class name
this->num1=num1;                         //this key for same name and calls current class constructor
this->num2=num2;
this->num3=num3;
}

void display(){

    cout<<num1<<" "<<num2<<" "<<num3;
}

};


int main(){
//calling the parameterized constructor
student s1(2,3,4);  
//calling the function
s1.display();                    
}