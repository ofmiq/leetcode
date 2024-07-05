#include "tree.h"

int SUM = 0;
void convertBSTHelper(TreeNode* node) {
    if (node) {
        convertBSTHelper(node->right);
        SUM += node->val;
        node->val = SUM;
        convertBSTHelper(node->left);
    }
}

TreeNode* Solution::bstToGst(TreeNode* root) {
    convertBSTHelper(root);
    return root;
}