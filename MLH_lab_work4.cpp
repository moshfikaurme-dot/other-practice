#include <iostream>
#define SIZE 5

using namespace std;

class Queue {
private:
    int front, rear;
    int arr[SIZE];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = value;
            cout << "Inserted " << value << endl;
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Deleted " << arr[front] << endl;
            front++;
            if (front > rear)
                front = rear = -1;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements are:" << endl;
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                exit(0);
            default:
                cout << "INVALID INPUT" << endl;
        }
    }

    return 0;
}
