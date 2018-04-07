//============================================================================
// Name        : ArrangingCoins.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Arranging Coins in C++, Ansi-style
//============================================================================

class Solution {
public:
    int arrangeCoins(int n) {
        int k=0;
        if(n==0)
            return 0;
        for(int i=0;i<n;++i) {
            n=n-i-1;
            k=i;
        }
        return k+1;


    }
};
