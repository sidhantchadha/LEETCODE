//============================================================================
// Name        : SymmetricTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Symmetric Tree in C++, Ansi-style
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return helper(root->left,root->right);
    }

    bool helper(TreeNode*p, TreeNode*q){
        if(p==NULL && q==NULL)
            return true;
        else if(p==NULL || q==NULL)
            return false;
        if(p->val != q->val)
            return false;
        return helper(p->left,q->right) && helper(p->right,q->left);
    }
};


