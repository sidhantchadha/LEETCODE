//============================================================================
// Name        : ValidAnagram.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Valid Anagram in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int>count(256,0);
        for(int i=0;i<s.length();i++)
            count[s[i]]++;

        for(int i=0;i<t.length();i++)
            count[t[i]]--;
        for(int i=0;i<s.length();i++)
            if(count[s[i]]!=0)
                return false;

        return true;
    }
};
