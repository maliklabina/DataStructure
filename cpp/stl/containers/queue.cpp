#include<iostream>

using namespace std;

int main(){

// FIFO
queue<int> q;
q.push(1);
q.push(2);
q.emplace(3);  
q.back(); // returns last element
q.front(); // returns first element 
q.pop(); // removes the first element
   





return 0;
}