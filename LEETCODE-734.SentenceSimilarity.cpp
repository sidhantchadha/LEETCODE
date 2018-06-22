//============================================================================
// Name        : SentenceSimilarity.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Sentence Similarity in C++, Ansi-style
//============================================================================

class Solution {
public:
    bool areSentencesSimilar(vector<string>& words1, vector<string>& words2, vector<pair<string, string>> pairs) {
   if(words1.size()!=words2.size())
       return false;
        unordered_map<string,unordered_set<string>>m;
        for(pair<string,string> p:pairs)
            m[p.first].insert(p.second);

        for(int i=0;i<words1.size();i++){
            if(m[words1[i]].count(words2[i]) || m[words2[i]].count(words1[i]) || words1[i]==words2[i])
                continue;
            return false;
        }
        return true;
}
};



