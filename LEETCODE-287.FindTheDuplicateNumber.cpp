//============================================================================
// Name        : FindTheDuplicateNumber.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find The Duplicate Number in C++, Ansi-style
//============================================================================

//If constant space constraint is not there//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>M;
        for(int i=0;i<nums.size();i++){
            M[nums[i]]++;
            if(M[nums[i]]>1)
                return nums[i];
        }
    }
};



//If constant space constraint is there//

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

		int slow = nums[0];
		int fast = nums[nums[0]];
		while (slow != fast)
		{
			slow = nums[slow];
			fast = nums[nums[fast]];
		}

		fast = 0;
		while (fast != slow)
		{
			fast = nums[fast];
			slow = nums[slow];
		}
		return slow;
    }
};
