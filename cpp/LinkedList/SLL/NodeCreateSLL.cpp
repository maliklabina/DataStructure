//creating a node in singly linked list 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;           //next pointer pointing to node 

    Node(int value){      //constructor initializing a node
        data=value;
        next=NULL;
    }
};

int main(){
Node *head;              //head pointer pointing to first node
head=new Node(4);        //Dynamic memory allocation

cout<<head->data<<endl;
cout<<head->next;

return 0;
}



