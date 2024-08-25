//default constructor

#include<iostream>
using namespace std;

class Project{
    public :
    //creating a constructor inside parent class
      Project(){                                 
      cout<<"Hello world"<<endl;

    }

};

class New : public Project{
    public:
    //creating a constructor inside child class
      New(){                                    
      cout<<"Hello cpp"<<endl;

    }

};

int main(){

//creating bject
//when we create an object the default constructor gets called automatically
//when we create an object first the parent class constructor gets called
//after that the child class constructor is called
New s;
return 0;
}