/*
1
12
123
1234
12345
123456
*/


#include<iostream>
using namespace std;

void pattern(int num){
    for(int i = 1; i<=num ; i++){
        for(int j = 1 ; j<=i; j++){
             cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"enter num ";
    cin>>a;
    pattern(a);
return 0;
}