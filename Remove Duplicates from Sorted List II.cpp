/**

Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

Example 1:

Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]

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
    ListNode* deleteDuplicates(ListNode* head) {
        
        std::map<int,int> freq ;
        
        while( head != nullptr )
        {
            freq[head->val]++ ;
            head = head->next ;
        }
        
        ListNode* main = new ListNode(0) ;
        ListNode* tail = main ;
        
        for ( auto it : freq )
        {
            if( it.second == 1 )
            {
                tail->next  = new ListNode(it.first) ;
                tail = tail->next ;
            }
        }
        
        return main->next ;
    }
};
