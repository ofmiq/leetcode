#define LEETCODE_TREE_H
#ifdef LEETCODE_TREE_H

#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    int rangeSumBST(TreeNode *root, int low, int high);
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,
                        TreeNode* target);
    bool checkTree(TreeNode* root);
    TreeNode* searchBST(TreeNode* root, int val);
    int maxDepth(TreeNode* root);
    std::vector<int> inorderTraversal(TreeNode* root);
    int deepestLeavesSum(TreeNode* root);
    int averageOfSubtree(TreeNode* root);
    int sumEvenGrandparent(TreeNode* root);
    TreeNode* constructMaximumBinaryTree(std::vector<int>& nums);
};

#endif  // LEETCODE_TREE_H