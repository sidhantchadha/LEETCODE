//============================================================================
// Name        : MaximumProductOfThreeNumbers.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Maximum Product Of Three Numbers in C++, Ansi-style
//============================================================================

#include<algorithm>
#include<vector>
class Solution {
public:
    int maximumProduct(vector<int>& V) {
      sort(V.begin(),V.end());
        int temp1=V[V.size()-1]*V[V.size()-2]*V[V.size()-3];
        int temp2=V[0]*V[1]*V[V.size()-1];
        return temp1>temp2?temp1:temp2;
    }
};
