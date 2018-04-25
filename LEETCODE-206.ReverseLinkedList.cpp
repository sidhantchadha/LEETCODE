//============================================================================
// Name        : ReverseLinkedList.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Reverse Linked List in C++, Ansi-style
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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=head;
        ListNode *n=NULL;
        ListNode *q;
        while(p){
            q=p->next;
            p->next=n;
            n=p;
            p=q;

        }
        head=n;
        return head;
    }
};
