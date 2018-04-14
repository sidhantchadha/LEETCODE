//============================================================================
// Name        : PalindromeLinkedList.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Palindrome Linked List in C++, Ansi-style
//============================================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        int count=0;
        ListNode *p=head;
        vector<int>V;
        while(p){
            V.push_back(p->val);
            p=p->next;
            count++;
        }

        stack<int>S;
        for(int i=0;i<count/2;i++)
            S.push(V[i]);
        int j=0;
        if(count%2==0)
             j=count/2;
        else
             j=(count/2)+1;
        for(;j<V.size();j++){
            if(S.top()!=V[j]){
                S.pop();
                return false;
            }
            else
                S.pop();
        }
        return true;



    }
};
