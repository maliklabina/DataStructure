#include<iostream>
#include<cmath>
using namespace std;

bool numbers(int val){
    for(int i=3;i<=sqrt(val);i++){
    if(val%i==0)
        return 0;
    }

return 1;

}

int main(){
int num;
cout<<"Enter a number ";
cin>>num;

if(num<=0){
    cout<<"not prime";
}

else if(num==2){
    cout<<"prime";
}

else if(num%2==0){
    cout<<"not prime";
}

else{
bool value=numbers(num);
if(value==1)
    cout<<"prime";
else
    cout<<"not prime";
}
return 0;
}