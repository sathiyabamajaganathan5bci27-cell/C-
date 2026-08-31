#include <iostream>

struct BSTNode {
    int val;
    BSTNode *left = nullptr, *right = nullptr;
    BSTNode(int v) : val(v) {}
};

BSTNode* insert(BSTNode* root, int val) {
    if (!root) return new BSTNode(val);
    if (val < root->val) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void inOrder(BSTNode* root) {
    if (!root) return;
    inOrder(root->left);
    std::cout << root->val << " ";
    inOrder(root->right);
}

int main() {
    BSTNode* root = nullptr;
    root = insert(root, 50); insert(root, 30); insert(root, 70);
    inOrder(root); std::cout << "\n";
    return 0;
}
