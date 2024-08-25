//creating a class and object

#include<iostream>
using namespace std;

class student{                                //creating a class
public:                                       //can be accessed everywhere
string name;
int age;
int rollno;

    void subject(){                               //method within a class
    cout<<"like maths"<<endl;
    }

    void chapter(){
    cout<<"likes p&c"<<endl;
    }

};

int main(){
student s1;                                       //creating an object of class
s1.name="labina";     
s1.age=18;
s1.rollno=29;
cout<<s1.name<<endl<<s1.age<<endl<<s1.rollno;
s1.subject();                                     //calling a method using object of same class
s1.chapter();     
return 0;
}