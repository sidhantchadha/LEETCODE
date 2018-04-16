//============================================================================
// Name        : TopKFrequentElements.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : TopKFrequentElements in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>count;
        vector<int>V;
        vector<int>res;
        multiset<int>S;

        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int ctr=0;
        for(auto i=count.begin();i!=count.end();i++)
            S.insert(i->second);
        for(auto j=S.rbegin();j!=S.rend();j++){
            if(ctr==k)
                break;
            V.push_back(*j);
            ctr++;
        }

        int a=0;
        for(int i=0;i<nums.size();i++){
            if(count[nums[i]]==V[a] && a!=k){
                res.push_back(nums[i]);
                a++;
               count.erase(nums[i]);
                i=0;
            }
            else
                continue;
        }


        return res;
    }
};
