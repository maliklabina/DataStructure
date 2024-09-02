#include<iostream>
using namespace std;

void sort(int array[], int size);

int main()
{
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
	int size = sizeof(array)/sizeof(array[0]);

	sort(array, size);

	for(int element : array){
		cout << element << " ";
	}

    cout<<"\nAfter ";
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}

    return 0;
}
void sort(int array[], int size){
	int temp;
	cout<<"\nBefore ";
	for(int i=0;i<size;i++){
	cout<<array[i]<<" ";
	}

	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - i - 1; j++){
			if(array[j] > array[j + 1]){             //for reverse sorting change the sign to ""
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}