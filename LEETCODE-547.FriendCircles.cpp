//============================================================================
// Name        : FriendCircles.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Friend Circles in C++, Ansi-style
//============================================================================


class Solution {
public:
    unordered_set<int>s;

    int findCircleNum(vector<vector<int>>& M) {
        int ans=0;
        for(int i=0;i<M.size();i++){
            if(s.find(i)==s.end()){
                dfs(M,i);
                ans++;
            }
        }
        return ans;
    }

    void dfs(vector<vector<int>>&M, int i) {
        s.insert(i);
        for(int j=0;j<M.size();j++){
            if(M[i][j]==1 && s.find(j)==s.end())
                dfs(M,j);
        }
    }
};
