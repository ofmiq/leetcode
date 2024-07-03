#include "tree.h"

bool Solution::evaluateTree(TreeNode* root) {
    if (root == nullptr) {
        return false;
    }

    if (!root->left && !root->right) {
        return root->val == 1;
    }

    bool leftEval = evaluateTree(root->left);
    bool rightEval = evaluateTree(root->right);

    if (root->val == 2) {
        return leftEval || rightEval;
    } else if (root->val == 3) {
        return leftEval && rightEval;
    }

    return false;
}