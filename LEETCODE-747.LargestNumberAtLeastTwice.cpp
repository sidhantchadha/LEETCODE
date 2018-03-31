//============================================================================
// Name        : LargestNumberAtLeastTwice.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Largest Number At Least Twice in C++, Ansi-style
//============================================================================

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=nums[0];
        int maxIndex=0;
        for(int i=0;i<nums.size();i++) {
            if(max<nums[i]) {
                max=nums[i];
                maxIndex=i;

        }
    }

        for(int j=0;j<nums.size();j++) {
            if(max==nums[j])
                continue;
            if(max < (2*nums[j]) && max!=(2*nums[j]))
                return -1;
        }
       return maxIndex;
    }

};
