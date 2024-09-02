//factorial

#include<iostream>
using namespace std;
int main(){
    int n,val=1;
    cout<<"enter number ";
    cin>>n;

    for(int i=1;i<=n;i++){
        val=val*i;
    }

    cout<<val;
    return 0;
}