#include <iostream>
#include <vector>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    std::vector<int> nodes;

    std::vector<int> postorderTraversal(TreeNode* root) {
        BinaryTreeInorderTraversal(root);
        return nodes;
    }

    void BinaryTreeInorderTraversal(TreeNode* node) {
        if (node == NULL) {
            return;
        }
        BinaryTreeInorderTraversal(node->left);
        BinaryTreeInorderTraversal(node->right);
        nodes.push_back(node->val);
    }
};
