#include<iostream>

using namespace std;


int main(){

// sorting

sort(a , a + n); // for array
sort(v.begin() , v.end()); // for vector


int num = 7;
int cnt = __builtin_popcount(num); // counts number of set bits in the integer [0000....111]
cout<<cnt<<endl;


string s = "123";
sort(s.begin(), s.end());

do{
    cout<<s<<endl;
}while(next_permutation(s.begin() , s.end())); // generates next permutation in dictionary order(array much be sorted)
// prints less compination for string - 231




// maximum element
int maxi = *max_element(a , a+n); // for array
int maxi1 = *max_element(v.begin() , v.end()); // for vector
// max_element gives the address of maximum element
// *max_element gives the value of maximum element

// same for minimum element
return 0;
}