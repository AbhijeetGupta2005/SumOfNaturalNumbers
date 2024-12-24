#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node(data);
    }
    cout << "Enter left or right of " << root->data << ": ";
    string direction;
    cin >> direction;
    if (direction == "left") {
        root->left = insert(root->left, data);
    } else if (direction == "right") {
        root->right = insert(root->right, data);
    }
    return root;
}

void preOrder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, data;
    cout << "Enter number of nodes: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Enter value for node " << (i+1) << ": ";
        cin >> data;
        if (root == nullptr) {
            root = new Node(data);
        } else {
            insert(root, data);
        }
    }

    cout << "Pre-order Traversal: ";
    preOrder(root);
    cout << endl;
    
    return 0;
}
