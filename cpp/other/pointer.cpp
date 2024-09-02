#include<iostream>
using namespace std;

void addition(){


};


int main(){
int num=4,num2=3;
int *ptr = &num;
cout<<ptr;
cout<<endl<<*ptr;
int sum = *ptr + num2;
cout<<endl<<sum;
return 0;
}