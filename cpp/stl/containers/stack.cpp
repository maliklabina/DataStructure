#include<iostream>
using namespace std;

int main(){

// LIFO
stack<int> st;    
st.push(1);
st.push(2);
st.push(3);
st.emplace(4);

st.pop(); // remove the top element
cout<<st.top()<<endl; 


stack<int> temp = st;  // copy the stack

while (!temp.empty()) {
    cout << temp.top() << " ";
    temp.pop();
}




    return 0;
}