#include<iostream>

using namespace std;


int main(){
    
deque<int> dq;
dq.push_back(1);
dq.push_back(2);
dq.push_front(0);
for(auto it : dq){
    cout<<it << " ";
}
cout<<endl;
dq.pop_back();
dq.pop_front();


dq.back(); // returns last element
dq.front(); // returns first element



return 0;
}