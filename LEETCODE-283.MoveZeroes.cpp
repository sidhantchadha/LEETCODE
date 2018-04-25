//============================================================================
// Name        : MoveZeroes.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Move Zeroes in C++, Ansi-style
//============================================================================
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int ctr=0;
        for(int i=0;i<nums.size();){
            if(nums[i]==0){
                ctr++;
                nums.erase(nums.begin()+i);
                i=i;
                
            }
            else
                i++;
        }
        for(int j=size-ctr;j<size;j++)
            nums.push_back(0);
        
        }
    
};
