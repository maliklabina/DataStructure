//Constructor overloading

#include<iostream>
using namespace std;

class Parent{
    public :
        string student;
        int age;
        int rollno;

};

class Child : public Parent{
    public:
       //parameterized constructor
      Child(string a , int b , int c){                                    
        this->student = a;
        this->age = b;
        this->rollno = c;
        cout<<student<<endl<<age<<endl<<rollno<<endl;
    }
       //constructor overloading
      Child(string a , int b){                                    
        this->student = a;
        this->age = b;
        cout<<student<<endl<<age<<endl;
    }

};

int main(){

Child s1("Malik" , 19 , 29);
Child s2("Labina" , 20);
return 0;
}