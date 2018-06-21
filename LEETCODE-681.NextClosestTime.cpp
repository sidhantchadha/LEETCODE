//============================================================================
// Name        : NextClosestTime.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Next Closest Time in C++, Ansi-style
//============================================================================

class Solution {
public:
    string nextClosestTime(string time) {
        vector<char> nums;
        for (char c:time)
            if (c != ':') nums.push_back(c);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < 4; i++) {
            if (nums[i] > time[4]) {
                time[4] = nums[i];
                return time;
            }
        }
        time[4] = nums[0];
        for (int i = 0; i < 4; i++) {
            if (nums[i] > time[3] && nums[i] < '6') {
                time[3] = nums[i];
                return time;
            }
        }
        time[3] = nums[0];
        for (int i = 0; i < 4; i++) {
            if (nums[i] > time[1] && (time[0] < '2' || nums[i] < '4')) {
                time[1] = nums[i];
                return time;
            }
        }
        time[1] = nums[0];
        for (int i = 0; i < 4; i++) {
            if (nums[i] > time[0] && nums[i] <= '2') {
                time[0] = nums[i];
                return time;
            }
        }
        time[0] = nums[0];
        return time;
    }
};
