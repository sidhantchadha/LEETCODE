//============================================================================
// Name        : ImplementQueueUsingStack.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Implement queue using Stack in C++, Ansi-style
//============================================================================

class MyQueue {
public:
    stack<int>S1;
    stack<int>S2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        S1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(S1.size()!=1){
            S2.push(S1.top());
            S1.pop();
        }
        int val=S1.top();
        S1.pop();
        while(!S2.empty()){
            S1.push(S2.top());
            S2.pop();
        }
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        while(S1.size()!=1){
            S2.push(S1.top());
            S1.pop();
        }
        int val=S1.top();
        while(!S2.empty()){
            S1.push(S2.top());
            S2.pop();
        }
        return val;
        
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return S1.empty();
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
