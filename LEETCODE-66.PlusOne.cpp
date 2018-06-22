//============================================================================
// Name        : PlusOne.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Plus One in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>V;
        string s="";
        for(int i=0;i<digits.size();i++){
            s=s+to_string(digits[i]);
        }
       long long num=stoll(s);
        num=num+1;
        while(num!=0){

            V.push_back(num%10);

            num=num/10;
        }
        reverse(V.begin(),V.end());
        return V;

    }
};
