//============================================================================
// Name        : ConvertBSTToGreaterTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Convert BST To Greater Tree in C++, Ansi-style
//============================================================================

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int cur_sum = 0;
public:
    void travel(TreeNode* root){
        if (!root) return;
        if (root->right) travel(root->right);

        root->val = (cur_sum += root->val);
        if (root->left) travel(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        travel(root);
        return root;
    }
};
