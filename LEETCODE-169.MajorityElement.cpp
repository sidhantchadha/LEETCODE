//============================================================================
// Name        : MajorityElement.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Majority Element in C++, Ansi-style
//============================================================================

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> counts;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            if (++counts[nums[i]] > n / 2)
                return nums[i];
    }


};
