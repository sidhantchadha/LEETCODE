//============================================================================
// Name        : KthSmallestElementInABST.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : KthSmallestElementInABST in C++, Ansi-style
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

//iterative//

class Solution {
    int x=0,ans=0;
public:

        int kthSmallest(TreeNode* p, int k) {
            if(p==NULL)
                return 0;
            stack<TreeNode*>s;
            while(p || !s.empty()){
                while(p){
                    s.push(p);
                    p=p->left;
                }
                p=s.top();
                s.pop();

                if(--k == 0)
                    break;
                p=p->right;

            }
            return p->val;
        }
};

//Recursive//

    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
            return 0;
        kthSmallest(root->left,k);
        x++;
        if(x==k)
            ans = root->val;
        kthSmallest(root->right,k);
        return ans;
    }
};
