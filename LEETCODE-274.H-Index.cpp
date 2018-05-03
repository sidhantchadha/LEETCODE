//============================================================================
// Name        : H-Index.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : H-Index in C++, Ansi-style
//============================================================================

class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int l=c.size();
        for(int i=0;i<c.size();i++){
            if(c[i]>=l-i)
                return l-i;
        }
        return 0;
    }
};
