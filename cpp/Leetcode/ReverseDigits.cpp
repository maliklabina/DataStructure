#include<iostream>
using namespace std;

int main(){
    int num;
     cout<<"enter ";
     cin>>num;
            
        int rem,ans=0;

        //until last digit
        while(num!=0){
             
        rem=num%10; 
        //returns last digit of number
        num/=10;
        //returns rest of the digits
        ans=ans*10+rem;
        //returns digits in reverse order


        //we can also get the ans just by printing the number from last digits    
        //cout<<rem;

        }
        cout<<ans;

return 0;
}