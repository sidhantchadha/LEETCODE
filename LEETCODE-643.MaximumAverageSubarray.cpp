//============================================================================
// Name        : MaximumAverageSubarray.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Maximum Average Subarray 1 in C++, Ansi-style
//============================================================================

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxsum = INT_MIN;
        int sum = 0;
        // k = min((size_t)k, nums.size());
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (i >= k) {
                sum -= nums[i - k];
            }
            if (i >= k - 1) {
                maxsum = max(maxsum, sum);
            }
        }
        return (double)maxsum / k;
    }
};
