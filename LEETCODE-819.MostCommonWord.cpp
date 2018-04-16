//============================================================================
// Name        : MostCommonWord.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Most Common Word in C++, Ansi-style
//============================================================================

class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        string s="";
        string c;
        multiset<string>S;
        for(int i=0;i<p.size();i++){
            if(isalpha(p[i])){
                s=s+p[i];
            }
            if(p[i]==' ' || i==p.size()-1){
                transform(s.begin(), s.end(), s.begin(), ::tolower);
                S.insert(s);
                s="";
            }

        }
        for(int i=0;i<b.size();i++){
            if(S.find(b[i])!=S.end())
                S.erase(b[i]);
        }

        int max=0;
        string res="";
                for(auto i=S.rbegin();i!=S.rend();i++)
                        if(S.count(*i)>max){
                            max=S.count(*i);
                            res=*i;
                        }

        return res;
    }
};
