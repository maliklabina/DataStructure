//stack implementation using array
//LIFO

#include<iostream>
#define MAX 10
using namespace std;

class Stack{
int s[MAX],top;
public:
Stack(){
    top=-1;
}
int isEmpty();
int isFull();
void Push(int);
int Pop();
int Peek();
void display();
};

int Stack::isEmpty(){
    if(top==-1)
       return 1;
    else
       return 0;
    }
int Stack::isFull(){
    if(top==MAX-1)
        return 1;
    else
    return 0;
    }
void Stack::Push(int data){
    if(isFull()){
        cout<<"\nStack overflow ";
    }
    else{
        top++;
        s[top]=data;
    }
}
int Stack::Pop(){
    if(isEmpty())
     cout<<"\nStack underflow ";
    else{
     int x=s[top];
     top--;
     return x;
    }
}
int Stack::Peek(){
    if(isEmpty())
      cout<<"Stack is empty";
    else
    cout<<s[top];
}
void Stack::display(){
    for(int i=top;i>-1;i--){
        cout<<s[i]<<" ";
    }
}

int main(){
    Stack stk;
    int x,ch,ans;
    do{
    cout<<"\n 1.Empty Stack \n 2.Full Stack \n 3.Push(Add element) \n 4.Pop(Delete element) \n 5.Get top element \n 6.display stack element \n";
    cin>>ch;

    switch(ch){
        case 1 : if(stk.isEmpty())
                cout<<"\nStack is Empty";
                 else
                    cout<<"\nstack is not empty\ncontains elements ";
                    stk.display();
                break;
        case 2 : if(stk.isFull())
                cout<<"\nStack is Full";
                else 
                cout<<"\nstack is not full,contains elements ";
                stk.display();
                break;
        case 3 : cout<<"\nAdd element to Insert: ";
                 cin>>x;
                 cout<<"\nStack elements ";
                 stk.Push(x);
                 stk.display();
                 break;
        case 4 : x=stk.Pop();
                 cout<<"\nDeleted element is "<<x;
                 cout<<"\nStack elements ";
                 stk.display();
                 break;
        case 5 : //cout<<"\nTop element";
                 stk.Peek();
                 break;
        case 6 : stk.display();
                 break;
        default : cout<<"\nWrong answer";
    }
    cout<<"\nDo you want to continue (1:Yes 0:No)";
    cin>>ans;
}while(ans!=0);

return 0;
}
