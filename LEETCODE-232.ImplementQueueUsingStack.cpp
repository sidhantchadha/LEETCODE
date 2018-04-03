//============================================================================
// Name        : ImplementQueueUsingStack.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Implement queue using Stack in C++, Ansi-style
//============================================================================

class MyQueue {
public:
    stack<int>S;
    stack<int>V;
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        S.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(S.size()!=1) {
            int temp=S.top();
            V.push(temp);
            S.pop();
        }
        int val=S.top();
        S.pop();
        while(V.size()!=0) {
            S.push(V.top());
            V.pop();
        }
        return val;
    }

    /** Get the front element. */
    int peek() {
          while(S.size()!=1) {
            int temp=S.top();
            V.push(temp);
            S.pop();
        }
        int val=S.top();
        while(V.size()!=0) {
            S.push(V.top());
            V.pop();
        }
        return val;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return(!S.size());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
