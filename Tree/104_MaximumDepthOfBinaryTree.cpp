#include "tree.h"
#include <algorithm>

int Solution::maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + std::max(maxDepth(root->right), maxDepth(root->left));
}