#include "tree.h"

int maxDepth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + std::max(maxDepth(root->right), maxDepth(root->left));
}

void deepestNodesSum(TreeNode* root, int maxDepth, int currentDepth, int& sum) {
    if (root == nullptr) {
        return;
    }
    if (currentDepth == maxDepth) {
        sum += root->val;
    }
    deepestNodesSum(root->left, maxDepth, currentDepth + 1, sum);
    deepestNodesSum(root->right, maxDepth, currentDepth + 1, sum);
}

int Solution::deepestLeavesSum(TreeNode* root) {
    int depth = maxDepth(root);
    int sum = 0;
    deepestNodesSum(root, depth, 1, sum);
    return sum;
}