//============================================================================
// Name        : RotateArray.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Rotate Array in C++, Ansi-style
//============================================================================

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
	    k = k % n;
	    reverse(nums, 0, n - k - 1);
	    reverse(nums, n - k, n - 1);
	    reverse(nums, 0, n - 1);

    }
     void reverse(vector<int>& nums, int a, int b) {
        int temp;
        for(int i = a; i < (b + a + 1) / 2; i++) {
	        temp = nums[i];
	        nums[i] = nums[a + b - i];
	        nums[a + b - i] = temp;
        }
    }
};
