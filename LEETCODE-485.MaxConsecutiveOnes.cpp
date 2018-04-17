//============================================================================
// Name        : MaxConsecutiveOnes.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Max Consecutive Ones in C++, Ansi-style
//============================================================================

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ctr=0;
        int maxx=0;
        vector<int>V;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                ctr++;
            if(nums[i]!=1 || i==nums.size()-1){
                maxx=max(ctr,maxx);
                ctr=0;
            }
        }
        return maxx;
    }

};
