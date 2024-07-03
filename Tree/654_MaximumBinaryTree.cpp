#include "tree.h"

TreeNode* construct(const std::vector<int>& nums, int left, int right) {
    if (left == right) {
        return nullptr;
    }
    int max_index = left;
    for (int i = left + 1; i < right; ++i) {
        if (nums[i] > nums[max_index]) {
            max_index = i;
        }
    }
    TreeNode* root = new TreeNode(nums[max_index]);
    root->left = construct(nums, left, max_index);
    root->right = construct(nums, max_index + 1, right);
    return root;
}

TreeNode* Solution::constructMaximumBinaryTree(std::vector<int>& nums) {
    return construct(nums, 0, nums.size());
}