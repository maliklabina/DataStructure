//Stack using singly linked list

#include<iostream>
using namespace std;

class Stack{
    struct node{
        int data;
        node *next;
    };

node *Top;

public:
Stack(){
    Top=NULL;
}
int Empty();
void Push(int x);
int Pop();
int Peek();
void Display();
};

int Stack::Empty(){
    if(Top==NULL)
        return 1;
    else
        return 0;
}

void Stack::Push(int val){
    node *newnode=new node;
    newnode->data=val;
    newnode->next=Top;
    Top=newnode;
}

int Stack::Pop(){
    node *temp=Top;
    int x=temp->data;
    Top=Top->next;
    delete temp;
    return x;
}

int Stack::Peek(){
    node *temp=Top;
    int x=temp->data;
    return x;
}

void Stack::Display(){
    node *temp=Top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    int ch,val,ans,m;
    Stack s;
    do{
        cout<<"\nMENU";
        cout<<"\n1.Push(ADD) \n2.Pop(DELETE) \n3.peek";
        cout<<"\nEnter your choice ";
        cin>>ch;

        switch(ch){
            case 1 : 
                cout<<"\nEnter data ";
                cin>>val;
                s.Push(val);
                s.Display();
                break;

            case 2 :
                if(s.Empty())
                cout<<"\nStack underflow ";
                else{
                    val=s.Pop();
                    cout<<"\ndeleted element "<<val<<endl;
                }
                cout<<"Stack elements ";
                s.Display();
                break;
            case 3 : 
               if(s.Empty())
                   cout<<"No element present in stack ";
                else
                    m=s.Peek();
                    cout<<m;
                    break;

            default : 
                cout<<"\nWrong choice ";
        }
        cout<<"\nDo you want to continue (1:YES 0:NO)";
        cin>>ans;

   } while( ans!=0 );
return 0;
}
