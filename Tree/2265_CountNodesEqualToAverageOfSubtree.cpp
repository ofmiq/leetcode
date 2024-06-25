#include "tree.h"

void dfs(TreeNode* root, int& count, int& sum, int& size) {
    if (root == nullptr) {
        sum = 0;
        size = 0;
        return;
    }

    int leftSum = 0, leftSize = 0;
    int rightSum = 0, rightSize = 0;

    dfs(root->left, count, leftSum, leftSize);
    dfs(root->right, count, rightSum, rightSize);

    sum = root->val + leftSum + rightSum;
    size = 1 + leftSize + rightSize;

    if (root->val == sum / size) {
        ++count;
    }
}

int Solution::averageOfSubtree(TreeNode* root) {
    int count = 0;
    int sum = 0;
    int size = 0;
    dfs(root, count, sum, size);
    return count;
}