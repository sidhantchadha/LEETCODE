//============================================================================
// Name        : ContainsDuplicateII.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Contains Duplicate II in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int,int>S;
        for (int i = 0; i < nums.size(); i++) {
            if (S.find(nums[i]) != S.end() && i - S[nums[i]] <= k)
                return true;
            S[nums[i]] = i;
        }
        return false;
    }
};
