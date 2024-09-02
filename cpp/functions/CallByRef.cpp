//call by reference 

#include<iostream>
using namespace std;

void calling(int &num){              //passing the address on a (actual value)
cout<<num<<endl;
num += 5;
cout<<num<<endl;
num += 5;
cout<<num<<endl;
}

int main(){
int a = 10;
calling(a);
cout<<a;                            //value gets updated
return 0;
}