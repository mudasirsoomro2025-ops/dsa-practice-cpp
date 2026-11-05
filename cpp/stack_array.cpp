#include <iostream>
using namespace std;

class Stack {
private:
    int items[5];
    int top;

public:
    Stack() { top = -1; }

    void push(int value) {
        if (top == 4) cout << "Stack is full." << endl;
        else items[++top] = value;
    }

    void pop() {
        if (top == -1) cout << "Stack is empty." << endl;
        else cout << "Removed: " << items[top--] << endl;
    }

    void display() {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) cout << items[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display();
    return 0;
}
