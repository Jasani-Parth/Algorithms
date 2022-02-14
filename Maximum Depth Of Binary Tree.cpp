/**
- https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
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
    
    int max(int x, int y)
    {
        if( x > y  )
            return x ;
        
        return y ;
    }
    
public:
    int maxDepth(TreeNode* root) {
        
        if ( root == nullptr )
            return 0 ;
        
        int LD = maxDepth(root->left) ;
        int RD = maxDepth(root->right) ;
        
        
        return max(LD,RD)+1 ;
        // +1 bcz for current level 
    }
};
