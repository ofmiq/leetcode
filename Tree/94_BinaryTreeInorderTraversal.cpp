#include "tree.h"

void traversal(TreeNode* root, std::vector<int>& v) {
    if (root != nullptr) {
        traversal(root->left, v);
        v.push_back(root->val);
        traversal(root->right, v);
    }
}
std::vector<int> inorderTraversal(TreeNode* root) {
    std::vector<int> result;
    traversal(root, result);
    return result;
}