#include<iostream>

using namespace std;

// Largest value has the highest priority i.e stays at top
// max heap
int main(){

priority_queue<int> pq;
pq.push(1);         // {1}
pq.push(3);         // {3,1}
pq.push(2);         // {3,1,2}
pq.emplace(4);      // {4,3,2,1} 

cout<<pq.top()<<endl;



// min heap
priority_queue<int , vector<int> , greater<int>> pq1;
pq1.push(1);
pq1.push(3);
pq1.push(2);

cout<<pq1.top()<<endl;


return 0;
}