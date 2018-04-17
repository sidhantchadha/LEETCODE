//============================================================================
// Name        : KthLargestElementInAnArray.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Kth Largest Element In An Array in C++, Ansi-style
//============================================================================

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.rbegin(),nums.rend());
        return nums[k-1];

    }
};
