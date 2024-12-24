#include <iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        int x = arr[front];
        if (front == rear) front = rear = -1;
        else front++;
        return x;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    void resize(int newSize) {
        int* newArr = new int[newSize];
        int j = 0;
        for (int i = front; i <= rear; i++) {
            newArr[j++] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        front = 0;
        rear = j - 1;
        capacity = newSize;
        cout << "Queue resized to capacity " << newSize << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5);
    int choice, value;

    while (true) {
        cout << "\nQueue Operations\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Resize Queue\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                value = q.dequeue();
                if (value != -1) cout << "Dequeued value: " << value << endl;
                break;
            case 3:
                value = q.peek();
                if (value != -1) cout << "Front value: " << value << endl;
                break;
            case 4:
                cout << "Enter new size: ";
                cin >> value;
                q.resize(value);
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
