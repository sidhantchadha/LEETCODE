//============================================================================
// Name        : TwoSumII.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Two Sum II in C++, Ansi-style
//============================================================================


class Solution {
public:
    vector<int> twoSum(vector<int>& V, int target) {

        unordered_set<int>S;
vector<int>Z;
int m=0;
int n=0;
unordered_set<int>::iterator i;
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
			Z.push_back(i+1);
            break;
        }

	}
	 Z.push_back(n+1);

 return Z;

    }
};
