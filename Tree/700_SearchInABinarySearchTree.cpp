#include "tree.h"

TreeNode* Solution::searchBST(TreeNode* root, int val) {
    while (root != nullptr && root->val != val) {
        if (root->val > val) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return root;
}