#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;
};

class sll{
    private :
    node *head;
    public :
    void creatlist();
    void display();
};

void sll::creatlist()
{
node *temp , *newnode;
int val;
int flag = 1;
int ans;
do {
cout<<"enter the element ";
cin>>val;
newnode = new node;
//if(newnode == NULL)
//cout<<"unable to locate memory ";
newnode->data = val;
newnode->next = NULL;

if(flag == 1){
head = newnode;
temp = head;
flag = 0;
}

else {
temp->next = newnode;
temp=newnode;
}

cout<<"do you want to continue (1: yes 0:no)";
cin>>ans;
}while(ans != 0);
}

void sll::display(){
    node* temp;
    temp = head;
    if(temp == NULL)
    cout<<"list is empty ";

    while(temp != NULL){
    cout<<"\n"<<temp->data;
    temp=temp->next;

    }

}

int main() {
    sll list;
    list.creatlist();
    list.display();
    return 0;
}




