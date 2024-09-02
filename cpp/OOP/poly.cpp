#include <iostream>

class ArrayCalculator {
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

};

int main() {
    ArrayCalculator c1;

    int  num1[] = {1, 2, 3, 4, 5};
    float num2[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};


    int intSum = c1.Sum1(num1, 5);
    float floatSum = c1.Sum2(num2, 5);
 

    std::cout << "Sum of int array: " << intSum << std::endl;
    std::cout << "Sum of float array: " << floatSum << std::endl;



    return 0;
}
