//============================================================================
// Name        : TrimABinarySearchTree.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Trim A Binary Search Tree in C++, Ansi-style
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
    TreeNode* trimBST(TreeNode* p, int L, int R) {
            if(p==NULL)
                return NULL;

        p->left=trimBST(p->left,L,R);
        p->right=trimBST(p->right,L,R);
        if(p->val < L)
            return p->right;
        if(p->val > R)
            return p->left;
        else
            return p;
    }
};
