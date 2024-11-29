#include<iostream>
#define MAX 10
using namespace std;


class Queue{
    int q[MAX];
    int front , rear;

    public :
        Queue(){
        rear = -1;
        front = -1;
        }
    int empty();
    int full();
    void enqueue(int x);
    int dequeue();
    void display();
};

int Queue :: empty(){
    if(rear == -1)
        return 1;
    else
         return 0;
}

int Queue :: full(){
    if(rear == MAX-1 )
        return 1;
    else 
        return 0;
}

void Queue :: enqueue(int x){
    if(rear == -1){
        front = rear = 0;
        q[rear] = x;
    }

    else{
        rear ++;
        q[rear]= x;
    }
} 

int Queue :: dequeue(){
    int x = q[front];
    if(front == rear){
        front = rear = -1;
    }
    else{
        front ++;
        return x;
    }
}

void Queue :: display(){
    for(int i= front ; i<= rear ; i++){
        cout<<" "<<q[i];
    }
    cout<<endl;
}


int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    return 0;
}
