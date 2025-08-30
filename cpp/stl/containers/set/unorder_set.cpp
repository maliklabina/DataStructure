#include<iostream>
#include<unordered_set>

using namespace std;

int main(){

// unique
// not sorted
// random order
// time complexity -- O(1) for search , insert and delete on average
// worst case -- O(n) -- when there is collision
unordered_set<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(2); // not inserted as set contains only unique elements

// lowerbound and upperbound does not work here

// rest functions are same as set



return 0;
}