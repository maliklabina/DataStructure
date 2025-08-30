#include<iostream>
#include<list>

using namespace std;

int main(){

list<int> ls;
ls.push_back(1);
ls.push_back(2);
ls.push_back(3);
ls.push_back(4);
ls.push_back(5);
ls.push_front(0);
for(auto it : ls){
    cout<<it << " ";
}
cout<<endl;
ls.pop_back();
ls.pop_front();

cout<<endl;

ls.remove(3); // remove the value 3 from the list


ls.reverse(); // reverse the list
for(auto it : ls){
    cout<<it << " ";
}



// rest functions are same as vector

return 0;
}