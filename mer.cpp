#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // Base cases
    if (l1 == nullptr) return l2;
    if (l2 == nullptr) return l1;

    ListNode dummy(0);
    ListNode* current = &dummy;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    current->next = (l1 != nullptr) ? l1 : l2;

    return dummy.next;
}

int main() {
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(3);
    l1->next->next = new ListNode(5);

    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(2);
    l2->next->next = new ListNode(6);

    ListNode* merged = mergeTwoLists(l1, l2);

    // Output merged list
    ListNode* current = merged;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }

    return 0;
}
