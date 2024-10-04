#include<iostream>
using namespace std;

class CircularQueue {
private:
    int front;
    int rear;
    int arr[5];
    int itemCount;
    
public:
    CircularQueue() {
        itemCount = 0;
        front = -1;
        rear = -1;
        for (int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    bool isEmpty();
    bool isFull();
    void enqueue(int val);
    int dequeue();
    int count();
    void display();
};

int main() {
    CircularQueue q1;
    int value, option;
    
    do {
        cout << "\n Queue Operations \n\n";
        cout << "\t1. Enqueue()" << endl;
        cout << "\t2. Dequeue()" << endl;
        cout << "\t3. isEmpty()" << endl;
        cout << "\t4. isFull()" << endl;
        cout << "\t5. Count()" << endl;
        cout << "\t6. Display()" << endl;
        cout << "\nWhat operation do you want to perform? (Enter 0 to exit): ";
        cin >> option;
        
        switch (option) {
            case 0:
                break;
                
            case 1:
                cout << "\nEnter an item to Enqueue in the Queue: ";
                cin >> value;
                q1.enqueue(value);
                break;

            case 2:
                cout << "\nDequeued Value: " << q1.dequeue() << endl;
                break;

            case 3:
                if (q1.isEmpty())
                    cout << "Queue is Empty" << endl;
                else
                    cout << "Queue is not Empty" << endl;
                break;

            case 4:
                if (q1.isFull())
                    cout << "Queue is Full" << endl;
                else
                    cout << "Queue is not Full" << endl;
                break;

            case 5:
                cout << "\nCount of items in Queue: " << q1.count() << endl;
                break;

            case 6:
                q1.display();
                break;

            default:
                cout << "Enter a valid option number." << endl;
        }
    } while (option != 0);

    return 0;
}

// Check if queue is empty
bool CircularQueue::isEmpty() {
    if (front == -1 && rear == -1)
        return true;
    else
        return false;
}

// Check if queue is full
bool CircularQueue::isFull() {
    if ((rear + 1) % 5 == front)
        return true;
    else
        return false;
}

// Add element to the queue
void CircularQueue::enqueue(int val) {
    if (isFull()) {
        cout << "Queue full" << endl;
        return;
    } else if (isEmpty()) {
        rear = 0;
        front = 0;
        arr[rear] = val;
    } else {
        rear = (rear + 1) % 5;
        arr[rear] = val;
    }
    itemCount++;
}

// Remove element from the queue
int CircularQueue::dequeue() {
    int x = 0;
    if (isEmpty()) {
        cout << "Queue is Empty" << endl;
        return x;
    } else if (rear == front) {
        x = arr[rear];
        arr[front] = 0;
        rear = -1;
        front = -1;
    } else {
        x = arr[front];
        arr[front] = 0;
        front = (front + 1) % 5;
    }
    itemCount--;
    return x;
}

// Count the number of items in the queue
int CircularQueue::count() {
    return itemCount;
}

// Display the elements in the queue
void CircularQueue::display() {
    cout << "All values in the Queue are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
