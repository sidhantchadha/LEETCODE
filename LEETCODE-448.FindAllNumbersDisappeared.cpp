//============================================================================
// Name        : FindAllNumbersDisappeared.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find All Numbers Disappeared in Array in C++, Ansi-style
//============================================================================


//Ideal solution//
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
           unordered_multiset<int>S;
        vector<int>L;
        for(int i = 0; i<nums.size(); i++)
        {
            S.insert(nums[i]);
        }
        sort(nums.begin(),nums.end());

        for(int i = 1; i<=nums[nums.size()-1]; i++)
        {
            if(S.find(i)==S.end())
            {
                L.push_back(i);
            }
        }
        return L;
    }

};

//Accepted solution//
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
           unordered_multiset<int>S;
        vector<int>L;
        for(int i = 0; i<nums.size(); i++)
        {
            S.insert(nums[i]);
        }

        for(int i = 1; i<=nums.size(); i++)
        {
            if(S.find(i)==S.end())
            {
                L.push_back(i);
            }
        }
        return L;
    }

};
