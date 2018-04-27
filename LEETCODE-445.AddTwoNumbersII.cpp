//============================================================================
// Name        : AddTwoNumbersII.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Add Two Numbers II in C++, Ansi-style
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
    ListNode* addTwoNumbers(ListNode* p, ListNode* q) {
        stack<int>S1;
        stack<int>S2;

        while(p){
            S1.push(p->val);
            p=p->next;
        }
        while(q){
            S2.push(q->val);
            q=q->next;
        }
        ListNode *newNode=new ListNode(0);
        ListNode *temp=NULL;
         int sum=0;

        while(!S1.empty() || !S2.empty()){

            if(!S1.empty()){
                sum=sum+S1.top();
                S1.pop();
            }


            if(!S2.empty()) {
                sum=sum+S2.top();
                S2.pop();
            }

            newNode->val=sum%10;
            sum=sum/10;
            temp = new ListNode(sum);
            temp->next = newNode;
            newNode = temp;
        }
        if(newNode->val)
            return newNode;
        else
            return newNode->next;


    }
};


