//============================================================================
// Name        : TeemoAttacking.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Teemo Attacking in C++, Ansi-style
//============================================================================

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
      int total = 0;
      int wakeup_time = 0;
        for (int i=0; i<timeSeries.size(); i++)
        {
            if (timeSeries[i] < wakeup_time)
                total = total + (timeSeries[i] + duration - wakeup_time);
            else
                total = total + duration;

            wakeup_time = timeSeries[i] + duration;
        }

        return total;
    }
};
