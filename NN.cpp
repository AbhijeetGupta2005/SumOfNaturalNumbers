#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* add(ListNode* l1, ListNode* l2) {
    
    ListNode* temp= new ListNode(0);
    ListNode* current = temp;

    int car=0;

    while (l1 != nullptr || l2 != nullptr || car != 0) {
        int sum = car;

        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        car = sum / 10;  // Update carry
        current->next = new ListNode(sum % 10);  // Create a new node for the digit
        current = current->next;
    }

    return temp->next;
}

void printNode(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(6);

    ListNode* sumed = add(l1, l2);
    printNode(sumed);

    return 0;
}