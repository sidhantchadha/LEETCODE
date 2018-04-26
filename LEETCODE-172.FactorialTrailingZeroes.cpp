//============================================================================
// Name        : FactorialTrailingZeroes.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Factorial Trailing Zeroes in C++, Ansi-style
//============================================================================

class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n){
            n=n/5;
            count=count+n;
        }
        return count;
    }
};
