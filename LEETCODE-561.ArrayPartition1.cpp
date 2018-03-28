//============================================================================
// Name        : LEETCODE-ArrayPartition1.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : ArrayPartition1 in C++, Ansi-style
//============================================================================

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i=i+2)
            sum=sum+min(nums[i],nums[i+1]);

        return sum;
    }
};
