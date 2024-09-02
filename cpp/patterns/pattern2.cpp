/*

* * * * * *
* * * * * *
* * * * * *
* * * * * *

*/



#include<iostream>
using namespace std;

void print(int num1,int num2){
for(int i = 0 ; i < num1 ; i++){
    for(int j = 0 ; j < num2 ; j++){
            cout<<"* ";
        }
            cout<<endl;
    }

}
int main(){
int a,b;
cout<<"enter rows and colums ";
cin>>a>>b;
print(a,b);
return 0;
}

