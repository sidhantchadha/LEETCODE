//============================================================================
// Name        : CountingBits.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Counting Bits in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> countBits(int num) {

        vector<int> V;
        V.push_back(0);
        if(num<1)
            return V;
        V.push_back(1);
        for(int i=2;i<=num;i++){
            if(i%2==1)
                V.push_back(V[i-1]+1);
            else
                V.push_back(V[i/2]);
        }
        return V;
    }
};
