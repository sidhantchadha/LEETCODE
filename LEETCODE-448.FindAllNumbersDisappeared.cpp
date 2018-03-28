//============================================================================
// Name        : FindAllNumbersDisappeared.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find All Numbers Disappeared in Array in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        if(nums.size()==0)
            return nums;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;) {
            if((nums[i+1]==nums[i]+1))
                i++;
             else if(nums[i]==nums[i+1])
                i++;
            else if(nums[i+1]!=(nums[i]+1)){
                v.push_back(nums[i]+1);
                nums.push_back(nums[i]+1);
                sort(nums.begin(),nums.end());
                i++;
            }


        }
        return v;
    }
};
