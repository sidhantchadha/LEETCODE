//============================================================================
// Name        : ContainsDuplicate.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Contains Duplicate in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<=1)
            return false;
        sort(nums.begin(),nums.end());
        bool isdup=false;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==nums[i+1])
                return true;
        }

            return isdup;
    }
};
