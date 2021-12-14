/**

Given the root of a binary tree, return the sum of values of nodes with an even-valued grandparent. If there are no nodes with an even-valued grandparent, return 0.
A grandparent of a node is the parent of its parent if it exists.

Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 18
Explanation: The red nodes are the nodes with even-value grandparent while the blue nodes are the even-value grandparents.

**/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
private : 
    
    int sum = 0 ;
    
public:
    
    void ChildWithEventGrandParent(TreeNode* root) {
        
        if( root == nullptr )
            return ;
        
        if( !(root->val&1) && root->left != nullptr ) {
            
            if( root->left->left != nullptr ) 
                this->sum += root->left->left->val ;
            
            if( root->left->right != nullptr ) 
                this->sum += root->left->right->val ;            
        }
        
        
        if( !(root->val&1) && root->right != nullptr ) {
            
            if(  root->right->right != nullptr ) 
                this->sum += root->right->right->val ;
            
            if( root->right->left != nullptr ) 
                this->sum += root->right->left->val ;
            
        }
        
        ChildWithEventGrandParent(root->left) ;
        ChildWithEventGrandParent(root->right) ;
        
    }
    
    int sumEvenGrandparent(TreeNode* root) {

        ChildWithEventGrandParent(root) ;
        
        return this->sum ;
    }
};
