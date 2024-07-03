#include "tree.h"

int sumRootToLeafHelper(TreeNode* root, int pathSum) {
    if (!root) {
        return 0;
    }
    pathSum = (pathSum << 1) |
              root->val;
    if (!root->left && !root->right) {
        return pathSum;
    }
    return sumRootToLeafHelper(root->left, pathSum) +
           sumRootToLeafHelper(root->right, pathSum);
}

int Solution::sumRootToLeaf(TreeNode* root) { return sumRootToLeafHelper(root, 0); }