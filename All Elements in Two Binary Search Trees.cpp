/**

- https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

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
    
    std::vector<int> first ;
    std::vector<int> second ;
    
public:
    
    void inorder(TreeNode* root,int flag)
    {
        if( root == nullptr )
            return  ;
        
        inorder(root->left,flag) ;
        
        if(flag&1)
            this->first.push_back(root->val) ;
        else 
            this->second.push_back(root->val) ;
        
        inorder(root->right,flag) ;
    }
    
    std::vector<int> merge(std::vector<int> a1,std::vector<int> a2)
    {
        int one = 0 ;
        int two = 0 ;
        
        std::vector<int> vec ;
        
        while( one <= a1.size()-1 && two <= a2.size()-1 )
        {
            if( a1[one] <= a2[two] && one <= a1.size()-1 )
            {
                  vec.push_back(a1[one++]) ;
            }
            else
            {
                  vec.push_back(a2[two++]) ;
            }
        }
        
        while( one < a1.size() )
        {
            vec.push_back(a1[one++]) ;
        } 

        while( two < a2.size() )
        {
            vec.push_back(a2[two++]) ;
        }
        
        return vec ;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        // for getting BST ele's in sorted order we need to do INORDER Traversal 
        
        if(root1!=nullptr)
            inorder(root1,1) ;
        if(root2!=nullptr)
            inorder(root2,2) ;
        
        if( this->first.size() == 0 )
            return this->second ;
        if(this->second.size() == 0)
            return this->first ;
        
        return merge(this->first,this->second) ;
        
    }
};
