#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to convert sorted array to BST
TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) {
    if (start > end) return nullptr;

    int mid = start + (end - start) / 2;
    TreeNode* root = new TreeNode(nums[mid]);

    root->left = sortedArrayToBST(nums, start, mid - 1);
    root->right = sortedArrayToBST(nums, mid + 1, end);

    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedArrayToBST(nums, 0, nums.size() - 1);
}

// Helper function to print the tree in a level order (BFS) manner
void printTree(TreeNode* root) {
    if (root == nullptr) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current != nullptr) {
            cout << current->val << " ";
            q.push(current->left);
            q.push(current->right);
        }
    }
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9}; // Example sorted array
    TreeNode* root = sortedArrayToBST(nums);

    cout << "Tree structure in level order:\n";
    printTree(root);

    return 0;
}
