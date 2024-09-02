#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    int i=5,j=0;
    int temp[5];

    while(i>0){
        temp[j]=arr[i];
        j++;
        i--;
    };

    for(j=0;j<5;j++){
    cout<<temp[j]<<" ";
    }

return 0;
}