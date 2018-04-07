//============================================================================
// Name        : ValidPerfectSquare.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : ValidPerfectSquare in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool isPerfectSquare(int num) {
        int half=num/2;
        if(num==1)
            return true;
        if(num==0)
            return false;
        for(int i=0;i<=half;i++)
            if(i*i==num){
                return true;
            }
        return false;

    }
};
