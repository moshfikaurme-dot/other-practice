#include<iostream>
#define MAX 10
using namespace std;

int arr [MAX];
int front = -1;
int rear = -1;

void enque(){
    int x;
    if (rear == MAX-1){
        cout << "insert element"<<endl;
    }

    else if (front == -1 && rear == -1){
        front = rear =0;
        cout << "insert element"<< endl;
        cin >> x;
        rear ++;
        arr[rear]=x;
    }
}

void deque (){
    if (front == -1 && rear == -1){
       cout<< "underdlow"<< endl;
       return; 
    }

    else if (front == rear){
        front = rear = -1;
        cout << "only element in queue is delete";
    }

    else {
        cout << "delete element:"<< arr [front];
        front ++;
    }
}

void display(){
    for (int i = front ; i<=rear; i++){
        cout << "element of queue:"<<arr[i]<<endl;
    }
}

int main(){
    enque();
    deque();
    display();

    return 0;
}
