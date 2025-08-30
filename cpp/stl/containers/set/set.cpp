#include<iostream>
#include<set>

using namespace std;

int main(){

    // unique
    // sorted

set<int> s;
s.insert(5);
s.insert(1);
s.insert(3);
s.insert(3); 
for(auto it : s){
    cout<<it << " ";
}
cout<<endl;

auto it = s.find(5);
cout<<*(it)<<endl; // if element not found it returns s.end()

it = s.find(9);
cout<<*(it)<<endl; 

s.erase(5); // removes 5 from the set

//cout<<s.end(); // points to the next element of the last element


it = s.lower_bound(2); // >= 2
cout<<*(it)<<endl;

it = s.upper_bound(3); // > 3
cout<<*(it)<<endl;


return 0;
}