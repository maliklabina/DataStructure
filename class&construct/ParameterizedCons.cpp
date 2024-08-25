//default constructor

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
    //creating a parameterized constructor
      Child(string a , int b , int c){   
        //this keyword stored the address of object                                 
        this->student = a;
        this->age = b;
        this->rollno = c;
        cout<<student<<endl<<age<<endl<<rollno;
    }
};

int main(){
//creating object and passing parameteres
Child s("Malik" , 19 , 29);
return 0;
}