#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    void pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            s2.pop();
        }
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.empty() ? -1 : s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }

    bool full() {
        // Assuming there is no fixed size limit for this implementation
        return false;
    }
};

int main() {
    MyQueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front: " << q.peek() << endl;  // Output: 1
    q.pop();
    cout << "Front after pop: " << q.peek() << endl;  // Output: 2
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;  // Output: No
    return 0;
}
