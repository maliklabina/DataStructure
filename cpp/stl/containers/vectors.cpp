#include <iostream>
#include <vector>

using namespace std;

int main(){

// first vector
vector<int> v;   // creates an empty container
v.push_back(1);
v.push_back(2);
v.emplace_back(3);    // much faster than push back
v.emplace_back(4);  

cout<< "size of vector v:" <<v.size()<<endl;
cout<< "element of index 2 is:" <<v[2]<<endl;



// second vector
vector<pair<int , int>> vec;
vec.push_back({1,2});
 
cout<<"size of vector vec: "<<vec.size()<<endl;


// third vector
vector<int> v1 (5,100); // contain  5 instances of 100
cout<<"size of vector v1 after instances "<<v1.size()<<endl;

// fourth vector
vector<int> v2 (5,200); // contain  5 instances of 200
cout<<"size of vector v1 after instances "<<v2.size()<<endl;

// iterators
// iterator is a pointer which points to the address of the container

for(vector<int> :: iterator it = v.begin(); it !=v.end(); it++){
    cout<<*(it) << " ";
}
cout<<endl;


// auto assignation
// auto == according to the data the dataype will be assigned
for(auto it = v.begin(); it != v.end(); it++ ){
    cout<<*(it) << " ";
}
cout<<endl;



for(auto it : v){
    cout<<it << " ";
}
cout<<endl;


// insert at any position
v.insert(v.begin() , 50);


// erase 
v.erase(v.begin()+1);
v.erase(v.begin()+2, v.begin()+4);  // [start , end) == from start to end-1

// swapping two vectors
v1.swap(v2);


// erase entire vector
v1.clear();
cout<< v1.empty(); // return true if vector is empty otherwise false

return 0;

}