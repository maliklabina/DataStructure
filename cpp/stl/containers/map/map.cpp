#include<iostream>
#include<map>
using namespace std;


int main(){

// key , value pairs
// keys can be of any datatype
// unique keys in sorted order


map<int , pair<int , int>> m;
m[1] = {2,3};
m[2] = {3,4};
m[3] = {4,5};
for(auto it : m){
    cout<<it.first << "==" << it.second.first << " " << it.second.second << endl;
}


cout<<endl;

auto it = m.find(2);
cout<<(it)->second.second;


auto it1 = m.lower_bound(2); // >= 2

auto it2 = m.upper_bound(2); // > 2

return 0;
}