#include <iostream>
using namespace std;

class Parent {
public:


};

class Child : public Parent {
public:

    int Sum1(int arr[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }


    float Sum2(float arr[], int size) {
        float sum = 0.0f;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    void func() {
        cout << "Enter 5 integers:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> num1[i];
        }
        cout << "You entered:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << num1[i] << " ";
        }
        cout << endl; // To ensure proper formatting
    }
};

int main() {
    Child obj;
    obj.func();
  
    int  num1[] = {1, 2, 3, 4, 5};
    float num2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    
    int intSum = obj.Sum1(num1, 5);
    float floatSum = obj.Sum2(num2, 5);
    obj.func();
    

    

 

    std::cout << "Sum of int array: " << intSum << std::endl;
    std::cout << "Sum of float array: " << floatSum << std::endl;
    return 0;
}
