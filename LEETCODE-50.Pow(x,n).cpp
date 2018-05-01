//============================================================================
// Name        : Pow(x,n).cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Pow(x,n) in C++, Ansi-style
//============================================================================

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        double t=myPow(x,n/2);
        if(n%2)
            return n<0 ? (1/x)*t*t : x*t*t;
        else
            return t*t;
    }
};

