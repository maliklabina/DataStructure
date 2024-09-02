//*
//**
//***
//****

#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0 ; i<n ; i ++){
        for(int j = 0 ; j<=i ; j++){
                cout<<"* ";

        }
        cout<<endl;
    }

}

int main(){
int a;
cout<<"enter ";
cin>>a;
pattern(a);
return 0;
}