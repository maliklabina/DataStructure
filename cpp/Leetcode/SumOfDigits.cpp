//sum of all digits

#include<iostream>
using namespace std;

int main(){
    int num;
     cout<<"enter ";
     cin>>num;

    //for single digit answer
    while(num>9){              
        int rem,ans=0;

        //until last digit
        while(num!=0){
             
        rem=num%10; 
        //returns last digit of number
        num/=10;
        //returns rest of the digits
        ans+=rem;
        //adds values from end
        }
        num=ans;
    }
    //return single digit answer
    cout<<num;
return 0;
}


