#include<iostream>
#include<set>
using namespace std;


int main(){

// sorted
// non unique

multiset<int> ms;
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(3);


ms.erase(1); // removes all instances of 1 from the multiset

ms.erase(ms.find(2)); // removes only one instance of 2 from the multiset





return 0;
}