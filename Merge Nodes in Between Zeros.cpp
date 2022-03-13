/**
- https://leetcode.com/problems/merge-nodes-in-between-zeros/
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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* main = new ListNode(0) ;
        ListNode* tail = main ;
        
        int sum = 0 ;
        
        while(head!=nullptr)
        {
            if(head->val != 0)
            {
                sum += head->val ;
            }
            else
            {
                tail->next = new ListNode(sum) ;
                tail = tail->next ;
                sum = 0 ;
            }
            
            head = head->next ;
        }
        
        delete head ;
        return main->next->next ;
        
    }
};
