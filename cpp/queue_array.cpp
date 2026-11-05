#include <iostream>
using namespace std;

class Queue {
private:
    int items[5];
    int front;
    int rear;

public:
    Queue() { front = 0; rear = -1; }

    void enqueue(int value) {
        if (rear == 4) cout << "Queue is full." << endl;
        else items[++rear] = value;
    }

    void dequeue() {
        if (front > rear) cout << "Queue is empty." << endl;
        else cout << "Removed: " << items[front++] << endl;
    }

    void display() {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) cout << items[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}
