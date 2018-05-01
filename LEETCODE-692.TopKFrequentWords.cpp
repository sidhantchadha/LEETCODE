//============================================================================
// Name        : TopKFrequentWords.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Top K Frequent Words in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> count;
        for (auto w : words)
            count[w]++;

        vector<vector<string>> V(words.size());
        for (auto i : count)
            V[i.second].push_back(i.first);

        vector<string> res;
        for (int i = V.size() - 1; k > 0 && i >= 0; i--) {
            if (V[i].empty())
                continue;
            int n = min(k,(int)V[i].size());
            res.insert(res.end(), V[i].begin(), V[i].begin() + n);
            k -= n;
        }

        return res;
    }
};
