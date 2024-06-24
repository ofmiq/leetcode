#include "tree.h"

bool Solution::checkTree(TreeNode* root) {
    return root->left->val + root->right->val == root->val;
}