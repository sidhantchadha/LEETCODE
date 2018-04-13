//============================================================================
// Name        : InvertBinaryTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Invert Binary Tree in C++, Ansi-style
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
public:
    TreeNode* invertTree(TreeNode* root) {
      TreeNode *p=root;
        if(p){
            invertTree(p->left);
            invertTree(p->right);
            swap(p->left,p->right);
        }
        return p;
    }
};
