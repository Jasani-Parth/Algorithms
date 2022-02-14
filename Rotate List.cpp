/**
- https://leetcode.com/problems/rotate-list/
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

    private :
    
        int count_len(ListNode* t)
        {
            int count = 0 ;
            
            while( t != nullptr )
            {
                t = t->next ;
                count++ ;
            }
            
            return count ;
        }

public:
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        if( head == nullptr ) return head ;
        
        int len = this->count_len(head) ;
        
        k = k%len ;
        
        if( k == 0 )
            return head ;
        
        ListNode* res = new ListNode(0) ;
        ListNode* restail = res ;
        ListNode* res1 = new ListNode(0) ;
        ListNode* res1tail = res1 ;
        
        while( len - k > 0 )
        {
            res1tail->next = new ListNode(head->val) ;
            head = head->next ;
            res1tail = res1tail->next ;
            
            k++ ;
        }
        
        restail->next = head ;
        
        while ( restail->next != nullptr )
        {
            restail = restail->next ;
        }
        
        restail->next = res1->next ;
        
        return res->next ;
    }
};
