//============================================================================
// Name        : StringCompression.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : String Compression in C++, Ansi-style
//============================================================================

class Solution {
public:
    int compress(vector<char>& c) {
        int ctr=1;
        string res="";
        for(int i=1;i<c.size();){
            if(c[i]==c[i-1]){
                ctr++;
                i++;
            }
            if(c[i]!=c[i-1]){
                res=res+c[i-1]+to_string(ctr);
                i++;
                ctr=1;
            }
        }
       // return res;

        return res.length();

    }
};
