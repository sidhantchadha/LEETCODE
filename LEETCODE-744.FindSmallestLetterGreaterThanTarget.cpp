//============================================================================
// Name        : FindSmallestLetterGreaterThanTarget.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find Smallest Letter Greater Than Target in C++, Ansi-style
//============================================================================

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char index;
        for(int i=0;i<letters.size();i++)
            if(letters[i]>target) {
                index=letters[i];
                break;
            }
        else {
            index=letters[0];
        }
        return index;

    }
};
