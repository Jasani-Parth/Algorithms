/**

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.

**/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0 ;
        
        ListNode* main = new ListNode(0) ;
        ListNode* tail = main ;
        
        while( l1 || l2 )
        {
            int t=0 ;
            
            if(l1!=nullptr && l2!=nullptr)
            {
                t += (l1->val + l2->val + carry) ;
                l1 = l1->next ;
                l2 = l2->next ;
                
                carry = (int)(t/10) ;
                t = (int)(t%10) ;
            }
            else if(l1==nullptr && l2!=nullptr)
            {
                t +=(l2->val + carry ) ;
                l2 = l2->next ;
                
                carry = (int)(t/10) ;
                t = (int)(t%10) ;
            }
            else if(l1!=nullptr && l2==nullptr)
            {
                t +=(l1->val + carry ) ;
                l1 = l1->next ;
                
                carry = (int)(t/10) ;
                t = (int)(t%10) ;
            }
            
            tail->next = new ListNode(t) ;
            tail = tail->next ;
        }
        
        if(carry>0) 
        {
            tail->next = new ListNode(v) ;
        }
        
        return main->next ;
    }
};
