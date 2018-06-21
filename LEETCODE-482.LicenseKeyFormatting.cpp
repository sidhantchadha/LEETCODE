//============================================================================
// Name        : LicenseKeyFormatting.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : License Key Formatting in C++, Ansi-style
//============================================================================

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        stack<char>s;
        for(char c:S)
            if(c!='-')
                s.push(c);
        int count=0;
        string str="";
        while(!s.empty()){
            if(count!=K){
                str=s.top() + str;
                count++;
                s.pop();

            }

            if(count==K){
                str='-'+str;
                count=0;
            }

        }
        if(str[0]=='-')
            str.erase(0,1);
        transform(str.begin(),str.end(),str.begin(),::toupper);
        return str;
    }
};
