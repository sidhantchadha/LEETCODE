//============================================================================
// Name        : FirstUniqueCharacterInAString.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : First Unique Character In A String in C++, Ansi-style
//============================================================================

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>count(256,0);
        int index=-1;
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            
        }
        for(int i=0;i<s.length();i++){          
        if(count[s[i]]==1){
                index=i;
                break;
        }
                }
        return index;
                
    }
};
