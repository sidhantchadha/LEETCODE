//============================================================================
// Name        : MissingNumber.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Missing Number in C++, Ansi-style
//============================================================================

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>S;
        int missing=-1;
        for(int i=0;i<nums.size();i++)
            S.insert(nums[i]);
    
        for(int j=0;j<=nums.size();j++){
            if(S.find(j)==S.end()){
                missing=j;
                break;
            }
        }
                
        
         return missing;       
    }
};
