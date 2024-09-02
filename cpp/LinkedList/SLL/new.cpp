#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    // Constructor to initialize node
    node(int val) {
        data = val;
        next = NULL;
    }
};

class SLL {
private:
    node *head;
public:
    SLL() : head(NULL) {}  // Constructor to initialize head

    void creatlist();
    void display();
};

void SLL::creatlist() {
    node *temp;
    node *newnode;
    int val, ans;
    int flag = 1;

    do {
        cout << "Enter the data: ";
        cin >> val;
        newnode = new node(val);  // Allocate memory and initialize newnode

        if (flag == 1) {
            head = newnode;
            temp = head;
            flag = 0;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Do you want to continue (1:Yes 0:No): ";
        cin >> ans;
    } while (ans != 0);
}

void SLL::display() {
    node *temp;
    temp = head;
    if (temp == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    while (temp != NULL) {
        cout << "\n" << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    SLL list;  // Create instance of SLL
    list.creatlist();  // Create the list
    list.display();    // Display the list

    return 0;
}
