/**

Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

Example 1:

Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]

**/

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp = head ;
        ListNode* main = new ListNode(0) ;
        ListNode* tail = main ;
        std::vector<int> vec ;
        int loop=1 ;
        
        while(head!=nullptr)
        {
            vec.push_back(head->val) ;
            head = head->next ;
        }
        
        for( int i = 0 ; i <= vec.size()-k ; i+=k )
        {
            for( int j = i ; j < (i+loop*k)/2 ; j++ )
            {
                int t = vec[(i+loop*k-1)-j] ;
                vec[(i+loop*k-1)-j] = vec[j] ;
                vec[j] = t ;
            }
            loop++ ;
        }
        
        for( auto it : vec )
        {
            tail->next = new ListNode(it) ;
            tail = tail->next ;
        }
        
        return main->next ;
    }
};
