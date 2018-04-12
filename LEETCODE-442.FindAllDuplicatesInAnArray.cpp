//============================================================================
// Name        : FindAllDuplicatesInAnArray.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find All Duplicates In An Array in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>V;
        unordered_multiset<int>S;
        for(int i=0;i<nums.size();i++){
            if(S.find(nums[i])!=S.end())
                V.push_back(nums[i]);
            else
                S.insert(nums[i]);

        }
        return V;
    }
};
