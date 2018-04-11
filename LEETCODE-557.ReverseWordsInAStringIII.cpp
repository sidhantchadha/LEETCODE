//============================================================================
// Name        : ReverseWordsInAStringIII.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Reverse Words In A String III in C++, Ansi-style
//============================================================================

class Solution {
public:
    string reverseWords(string s) {
        string f="";
        stringstream ss(s);
        string word;
        while(ss>>word) {
            reverse(word.begin(),word.end());
            f=f+word+" ";
        }
        f[s.length()]='\0';
        return f;
    }
};
