//Insertion at beginning of Singly linked list (works)

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;     

    //constructor
    Node(int value){    
        data=value;
        next=NULL;
    }
};

int main(){
Node *head;          
head=NULL;       

//Array elements to store in SLL
int arr[5]={1,2,3,5,4};

for(int i=0;i<5;i++){
    //if linked list does  not exist
    if(head==NULL){
        head=new Node(arr[i]);
    }
    //if linked list exist
    else{
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
}

Node *temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;
return 0;
}