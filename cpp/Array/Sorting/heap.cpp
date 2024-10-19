#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i) {
   int temp;
   int largest = i;
   int l = 2 * i + 1;
   int r = 2 * i + 2;
   if (l < n && arr[l] > arr[largest])
      largest = l;
   if (r < n && arr[r] > arr[largest])
      largest = r;
   if (largest != i) {
      temp = arr[i];
      arr[i] = arr[largest];
      arr[largest] = temp;
      heapify(arr, n, largest);
   }
}
void printarray(int arr[],int n)
   { int i;
     for (i = 0; i < n; ++i)
     cout<<arr[i]<<"   ";
     cout<<"\n";
}  
void heapSort(int arr[], int n) {
   int temp;
   for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
   for (int i = n - 1; i >= 0; i--) {
      temp = arr[0];
      arr[0] = arr[i];
      arr[i] = temp;
      heapify(arr, i, 0);
      printarray(arr,n);
   }
 }
 
 
int main() {
   int arr[10] ,n,i;
   cout<<"\n Enter number of elements to be sorted : ";
   cin>>n; 
   cout<<"\n Enter elements :";
   for(i=0;i<n;i++)
   cin>>arr[i];
   cout<<"\n\nGiven array is: "<<endl;
   for (i = 0; i<n; i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   heapSort(arr, n);
   cout<<"\nsorted array is \n";
   for (i = 0; i < n; ++i)
   cout<<arr[i]<<" ";
   cout<<endl;
}
