#include<iostream>
#include<utility>

using namespace std;

int main(){
    pair<int , int> p = {3,6};
    cout << p.first << " ";
    cout << p.second << endl;


    pair<int , pair<int , int>> p1 = {4 ,{5,6}};
    cout<<p1.first << " ";
    cout<<p1.second.first << " "; 
    cout<<p1.second.second << " ";
   

    return 0;
}