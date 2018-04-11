//============================================================================
// Name        : RansomNote.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Ransom Note in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool canConstruct(string r, string m) {

        vector<int>count(256,0);
        for(char ma:m)
            count[ma]++;
        for(char ra:r) {
            count[ra]--;
            if(count[ra]<0)
                return false;
        }
        return true;
    }
};
