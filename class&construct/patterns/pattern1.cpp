/*

****
****
****
****

*/

//for outer loop count no. of lines
//for inner loop count columns and connect them to rows

#include<iostream>
using namespace std;

void print(int num){
for(int i = 0 ; i < num ; i++){
    for(int j = 0 ; j < num ; j++){
            cout<<"* ";
        }
            cout<<endl;
    }

}
int main(){
int a;
cout<<"enter ";
cin>>a;
print(a);
return 0;
}

