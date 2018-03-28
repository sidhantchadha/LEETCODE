//============================================================================
// Name        : LEETCODE-MaxConsecutiveOnes.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Maximum Consecutive Ones in C++, Ansi-style
//============================================================================
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        vector<int>c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                count++;
            else if(nums[i]==0) {
                c.push_back(count);
                count=0;

        }

    }
        c.push_back(count);
        make_heap(c.begin(),c.end());
        return c.front();
};

int main() {
	vector<int>v;
	v.push_back(1);
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);

	v.push_back(0);
	v.push_back(0);
	v.push_back(0);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);

cout<<findMaxConsecutiveOnes(v);

}
