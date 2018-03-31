//============================================================================
// Name        : MissingNumber.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Missing Number in C++, Ansi-style
//============================================================================

class Solution {
public:
    int missingNumber(vector<int>& V) {
        unordered_set<int>S;
        if(V.size()==0)
            return 0;

        int minn=0;
        make_heap(V.begin(),V.end());
        int maxx=V.front();
        for(int i=0;i<V.size();i++) {

            S.insert(V[i]);

        }

        for(int i=minn;i<=maxx;++i) {
            if(S.find(i)==S.end())
                return i;
            }
        return maxx+1;
    }
};
