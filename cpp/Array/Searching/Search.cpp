#include<iostream>
using namespace std;

int main(){
int ans,flag=-1;
int arr[5]={1,2,5,6,7};
cout<<"enter element to search ";
cin>>ans;

 for(int i=0;i<5;i++){

 if(ans==arr[i]){
    cout<<"found";
    flag=1;

   }
}
if(flag==-1){
    cout<<"not found";
}

return 0;
}