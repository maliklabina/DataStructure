//call by value

#include<iostream>
using namespace std;


void name(int num){
 cout<<num<<endl;
 num += 5;                 // incrementing the value
 cout<<num<<endl;
 num += 5;                 // again incrementing the value
 cout<<num<<endl;


}

int main(){
int a = 10;      
name(a);                        //calling the function
cout<<"value of a is "<<a;      //printing a after incrementing 

}


//while calling the function , the function only considers a copy of that value.
//hence even after incrementing the value it again prints the same value in tha main function.

