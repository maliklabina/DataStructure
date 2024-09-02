//T.C: O(n^2)
//best case : O(n)

#include<iostream>
using namespace std;

  void bubble(int a[20],int n){
    int t,pass,j;
      for(pass=0;pass<n-1 ;pass++) {                //passes
        for(j=0;j<n-1-pass;j++) {
            if(a[j]>a[j+1]) {
            t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
          }
  }
}

int main(){
int a[20],val;
cout<<"Enter size of array ";
cin>>val;
cout<<"Enter elements to store in array ";
for(int i=0;i<val;i++){
  cin>>a[i];
}

bubble(a,val);

    cout << "Sorted array: ";
    for(int i = 0; i < val; i++) {
        cout << a[i] << " ";
    }

return 0;
}