//============================================================================
// Name        : HammingDistance.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Hamming Distance in C++, Ansi-style
//============================================================================

class Solution {
public:
    int hammingDistance(int x, int y) {
        string a = bitset<sizeof(x)*8>(x).to_string();
        string b = bitset<sizeof(y)*8>(y).to_string();
        int count=0;

        for(int i=0;i<sizeof(x)*8;i++){
           if(a[i]!=b[i])
                count++;
        }
        return count;
    }
};
