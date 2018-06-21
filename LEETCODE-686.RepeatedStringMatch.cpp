//============================================================================
// Name        : RepeatedStringMatch.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Repeated String Match in C++, Ansi-style
//============================================================================

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string str=a;
        int count=-1;
        for(int i=1;i<=b.length()/a.length()+2;i++){
            if(str.find(b)!=string::npos){
                count=i;
                break;
            }
            else
                str=str+a;
        }
        return count;
    }
};
