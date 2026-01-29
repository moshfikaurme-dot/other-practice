#include <iostream>
#define MAXSIZE 10

using namespace std;

int stack[MAXSIZE];
int top = -1;

void push(int value) {
    if(top < MAXSIZE - 1) {
        stack[++top] = value;
        cout << "Element " << value << " pushed into the stack." << endl;
    } else {
        cout << "Stack Overflow!" << endl;
    }
}

void pop() {
    if(top > -1) {
        cout << "Element " << stack[top] << " popped from the stack." << endl;
        top--;
    } else {
        cout << "Stack Underflow!" << endl;
    }
}

void print() {
    if(top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements:" << endl;
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {
    int choice, value;
    while(true) { // Infinite loop
        cout << "\n1. Push\n2. Pop\n3. Print\n4. Exit\nEnter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                print();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
