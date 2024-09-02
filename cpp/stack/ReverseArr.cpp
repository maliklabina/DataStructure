//Reversing an array using stack

#include <iostream>
using namespace std;

#define MAX 15

class Stack {
    char s[MAX];
    int top; 
public:
    Stack() {
        top = -1;
    }

    int isEmpty();
    int isFull();
    void Push(char);
    char Pop();
    void Display();
    void Reverse(char[]);
};

int Stack::isEmpty() {
    return top == -1;
}

int Stack::isFull() {
    return top == MAX - 1;
}

void Stack::Push(char ch) {
    if (!isFull()) {  
        top++;  
        s[top] = ch;
    } else {
        cout << "Stack Overflow" << endl;
    }
}

char Stack::Pop() {
    if (!isEmpty()) {
        char x = s[top];
        top--;
        return x;
    } else {
        cout << "Stack Underflow" << endl;
        return '\0';  // Return null character if stack is empty
    }
}

void Stack::Display() {
    for (int i = top; i >= 0; i--)
        cout << " " << s[i];
    cout << endl;
}

void Stack::Reverse(char string[15]) {
    for (int i = 0; string[i] != '\0'; i++) {
        Push(string[i]);
    }
    while (!isEmpty()) {
        cout << Pop();  
    }
    cout << endl;
}

int main() {
    Stack s;
    char str[15];

    cout << "\nEnter any string: ";
    cin.getline(str, MAX);                 //reads entire string with space 
    s.Reverse(str);
    return 0;
}
