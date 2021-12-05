/**
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* odd = new ListNode(0) ;
        ListNode* otail = odd ;
        ListNode* even = new ListNode(0) ;
        ListNode* etail = even ;
        
        int f = 1 ;
        
        while(head!=nullptr)
        {
            if(f&1){
                otail->next = new ListNode(head->val) ;
                otail = otail->next ;
            }
            else{
                etail->next = new ListNode(head->val) ;
                etail = etail->next ;
            }
            
            f++ ;
            head = head->next ;
        }
        
        otail->next = even->next ;
        
        return odd->next ;
    }
};
