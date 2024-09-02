#include<iostream>
using namespace std;

int year(int n){
    if(n%400==0){
        cout<<"Leap year";
    }
    else if(n%4==0 & n%100!=0){
        cout<<"Leap year";
        return n;
    }
    else
        cout<<"Not a leap year ";

}

int main(){
    int num;
    cout<<"enter the year ";
    cin>>num;
    year(num);

return 0;
}