//============================================================================
// Name        : BinaryTreeZigzagLevelOrderTraversal.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Binary Tree Zigzag Level Order Traversal in C++, Ansi-style
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* p) {
        vector<vector<int>>ans;
        if(p==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(p);
        char level=1;
        while(!q.empty()){
            int size=q.size();
            vector<int>V;
            for(int i=0;i<size;i++){
                if(level==1)
                    V.push_back(q.front()->val);
                else
                    V.insert(V.begin(),q.front()->val);
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                q.pop();

            }
            level=-level;
            ans.push_back(V);
        }
        return ans;


    }
};
