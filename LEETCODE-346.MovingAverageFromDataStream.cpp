//============================================================================
// Name        : MovingAverageFromDataStream.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Moving Average From Data Stream in C++, Ansi-style
//============================================================================

class MovingAverage {
public:
    /** Initialize your data structure here. */
    queue<int>q;
    int s;
    int sum=0;
    MovingAverage(int size) {
        s=size;

    }

    double next(int val) {
        if(s==q.size()){
            sum-=q.front();
            q.pop();
        }
        q.push(val);
        sum+=val;
        return static_cast<double>(sum)/q.size();
    }
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage obj = new MovingAverage(size);
 * double param_1 = obj.next(val);
 */
