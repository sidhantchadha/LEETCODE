//============================================================================
// Name        : ProductOfArrayExceptSelf.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Product Of Array Except Self in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int first=1;
        int last=1;
        int n=nums.size();
        vector<int>V(n,1);
        for(int i=0;i<n;i++) {
            V[i]=first*V[i];
            first=first*nums[i];
            V[n-1-i]=last*V[n-1-i];
            last=last*nums[n-1-i];
        }
        return V;
    }
};
