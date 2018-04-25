//============================================================================
// Name        : IntersectionOfTwoLinkedLists.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Intersection Of Two Linked Lists in C++, Ansi-style
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p=headA;
        ListNode *q=headB;
        if(p==NULL || q==NULL)
            return NULL;
        while(p && q && p!=q){
            p=p->next;
            q=q->next;
            if(p==q)
                return p;
            if(p==NULL)
                p=headB;
            if(q==NULL)
                q=headA;
        }
        return p;
    }
};
