#include<iostream>
using namespace std;

class Parent{                                                 //Encapsulation  << variables and methods inside a class
    private:                                                  //Abstrsction    <<  private member of class only accessible in current class
    int i = 10;
    
    public:
    string arr[3] = {"Thor","Hela","loki"};

            int numbers(){
            int a = 20;
            int sum = a + i;
            return sum;
        }

};

class Child : public Parent{                                    
    public:
       
       void meth(){                                           //Inheritance <<accessing the public member of parent class
        arr[0] = "odin";
        cout<<"updated array is :"<<endl;
        for (int i = 0; i < 3; i++) {
        cout<<arr[i]<<" ";
        }
        cout<<endl;
       }
         

        int Sum1(int arr[], int size) {                         //polymorphism << function overloading
        int sum = 0;                                            //two functions of same name but different paramenters
        for (int i = 0; i < size; i++) {                        //passing int values
            sum += arr[i];
        }
        return sum;
    }


       float Sum1(float arr[], int size) {                       //polymorphism
        float sum = 0.0f;                                        //passing float values
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    void disp(){
    for(int i=0 ; i<3 ; i++){
    cout<<arr[i]<<" "; 
     }
    cout<<endl;
    }
   
};

int main(){
Child s;

s.disp();

int  num1[] = {1, 2, 3, 4, 5};
float num2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};


int intSum = s.Sum1(num1, 5);
float floatSum = s.Sum1(num2, 5);
 

std::cout << "Sum of int array: " << intSum << endl;
std::cout << "Sum of float array: " << floatSum << endl;

int val = s.numbers();
cout<<"sum is : "<<val<<endl;

s.meth();

return 0;
}
