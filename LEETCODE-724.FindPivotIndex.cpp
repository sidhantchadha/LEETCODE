//============================================================================
// Name        : FindPivotIndex.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Find Pivot Index in C++, Ansi-style
//============================================================================

class Solution {
public:

    int left(vector<int>V,int k){
        int count=0;
        for(int i=0;i<k;++i)
            count=count+V[i];
        return count;
    }

    int right(vector<int>V,int k){
        int count=0;
        for(int i=k+1;i<V.size();++i)
            count=count+V[i];
        return count;
    }
    int pivotIndex(vector<int>& V) {
        int index=-1;
        for(int i=0;i<V.size();i++)
            if(left(V,i)==right(V,i)){
                index=i;
                break;
    }
        return index;
    }
};
