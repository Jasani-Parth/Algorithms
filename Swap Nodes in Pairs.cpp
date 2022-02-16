/**

- https://leetcode.com/problems/swap-nodes-in-pairs/

**/

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* main = head ;
        ListNode* p = head ;
        ListNode* q ;
        
        if(p==nullptr) ;
            else
            {
                q = head->next ;
            }
        
        while(p!=nullptr&&q!=nullptr)
        {
            int t = p->val ;
            p->val = q->val ;
            q->val = t ;
            
            p = q->next ;
            if(p==nullptr) break ;
            else
            {
                q = p->next ;
            }
        }
        
        return main ;
    }
};
