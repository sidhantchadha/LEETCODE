//============================================================================
// Name        : TwoSum.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Two Sum in C++, Ansi-style
//============================================================================

class Solution {
public:
vector<int> twoSum(vector<int>& V, int target) {

    unordered_set<int>S;
    vector<int>Z;
    int m=0;
    int n=0;
	for(int i=0;i<V.size();i++){
    if(S.find(V[i])!=S.end()) {
    	 m=V[i];
    	 n=i;
    }
    else
    S.insert(target-V[i]);
}
	for(int i=0;i<V.size();++i) {
		if(V[i]==(target-m)) {
			Z.push_back(i);
            break;
        }
	}
	 Z.push_back(n);
    return Z;
    }
};
