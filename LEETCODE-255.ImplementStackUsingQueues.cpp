//============================================================================
// Name        : ImplementStackUsingQueues.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

class MyStack {
public:
    queue<int>Q;
    queue<int>V;
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        Q.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(Q.size()!=1) {
            int temp=Q.front();
            Q.pop();
            V.push(temp);

        }
        int value=Q.front();
        Q.pop();
        while(V.size()!=0) {
            Q.push(V.front());
            V.pop();
        }
        return value;
    }

    /** Get the top element. */
    int top() {
        return Q.back();
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        if(Q.size()==0)
            return true;
        else
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */
