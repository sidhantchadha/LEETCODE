//============================================================================
// Name        : HouseRobber.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : House Robber in C++, Ansi-style
//============================================================================

class Solution {
public:
    int rob(vector<int>& nums) {
        int s1=0;
        int s2=0;
        if(nums.size()==0)
            return 0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)
                s1=max(s1+nums[i],s2);
            else
                s2=max(s1,s2+nums[i]);
        }
        return max(s1,s2);
    }
};
