//============================================================================
// Name        : ThirdMaximumNumber.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Third Maximum Number in C++, Ansi-style
//============================================================================

class Solution {
public:
   int thirdMax(vector<int>& nums) {
    set<int> S;
    for (int num : nums) {
        S.insert(num);
        if (S.size() > 3)
            S.erase(S.begin());
    }
    return S.size() == 3 ? *S.begin() : *S.rbegin();
}
};
