//============================================================================
// Name        : KEmptySlots.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : K Empty Slots in C++, Ansi-style
//============================================================================

class Solution {
public:
    int kEmptySlots(vector<int>& flowers, int k) {
        int s=flowers.size();
        vector<int> days(s);
        for(int i=0; i<flowers.size();i++)
            days[flowers[i] - 1] = i + 1;
        int left = 0;
        int right = k + 1;
        int res = INT_MAX;
        for(int i = 0; right < days.size(); i++){
            if(days[i] < days[left] || days[i] <= days[right]){
                if(i == right)
                    res = min(res, max(days[left], days[right]));    //we get a valid subarray
                left = i;
                right = k + 1 + i;
            }
        }
        return (res == INT_MAX)?-1:res;
    }
};
