//============================================================================
// Name        : ConstructStringFromBinaryTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Construct String From Binary Tree in C++, Ansi-style
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
    string tree2str(TreeNode* t) {
        TreeNode *p=t;
        if(p==NULL)
            return "";
        string s=to_string(p->val);
        if(p->left)
            s=s+ '(' + tree2str(p->left) + ')';
        else if(p->right)
            s=s+"()";
        if(p->right)
            s=s+ '(' + tree2str(p->right) + ')';
        return s;

    }
};
